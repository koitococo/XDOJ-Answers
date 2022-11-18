#include <stdio.h>

void *malloc(size_t size);
void free(void *ptr);

int _ssort(void **values, int len, int (*cmp)(void *, void *))
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (cmp(values[i], values[j]) > 0) // return above zero if i<j, descending
            {
                void *tmp = values[i];
                values[i] = values[j];
                values[j] = tmp;
            }
        }
    }
    return 0;
}

int _min(int *nums, int len)
{
    int min = 0x7fffffff;
    for (int i = 0; i < len; i++)
    {
        if (min > *nums)
        {
            min = *nums;
            nums++;
        }
    }
    return min;
}

int cmp(int *a, int *b)
{
    return *a - *b;
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int *nums = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", nums + i);
    }
    int **ps = malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
    {
        ps[i] = &nums[i];
    }
    _ssort((void **)ps, n, cmp);
    int *deltas = malloc(sizeof(int) * n);
    for (int i = 0; i < n - 1; i++)
    {
        deltas[i] = *ps[i + 1] - *ps[i];
    }
    printf("%d", _min(deltas, n - 1));
    free(deltas);
    free(nums);
    return 0;
}
