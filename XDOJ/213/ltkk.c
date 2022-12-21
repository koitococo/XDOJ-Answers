#include <stdio.h>

void *malloc(size_t size);
void free(void *ptr);

#define bool int
#define true 1 == 1
#define false 0 == 1
#define number int

int _cmp(int *a, int *b)
{
    return *a > *b;
}

void _ssort(void **values, int len, int (*cmp)(void *, void *))
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (cmp(values[i], values[j]) > 0) // return i>j, ascending
            {
                void *tmp = values[i];
                values[i] = values[j];
                values[j] = tmp;
            }
        }
    }
}

int **ssort(int *nums, int len)
{
    int **ptrs = malloc(len * sizeof(int *));
    for (int i = 0; i < len; i++)
    {
        ptrs[i] = &nums[i];
    }
    _ssort(ptrs, len, _cmp);
    return ptrs;
}

int main(int argc, char const *argv[])
{
    int m, n;
    scanf("%d %d", &n, &m);
    int *nums = malloc(m * n * sizeof(int));
    for (int i = 0; i < m * n; i++)
    {
        scanf("%d", nums + i);
    }
    int **ptrs = ssort(nums, m * n);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%3d", *ptrs[m * i + j]);
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                printf("%3d", *ptrs[m * (i + 1) - j - 1]);
            }
        }
        if (i < n - 1)
        {
            printf("\n");
        }
    }
    return 0;
}