
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

int _strcmp(char *strA, char *strB)
{
    while (1)
    {
        if (*strA == *strB)
        {
            if (*strA == 0 && *strB == 0)
            {
                return 0;
            }
        }
        else
        {
            return *strA > *strB ? 1 : -1;
        }
        strA++;
        strB++;
    }
}

int _strlen(char *str)
{
    int len = 0;
    while (*str != 0)
    {
        len++;
        str++;
    }
    return len;
}

int _isempty(char *str)
{
    while (*str != 0)
    {
        if (*str != ' ' || *str != '\t' || *str != '\r' || *str != '\n')
        {
            return 0;
        }
        str++;
    }
    return 1;
}

int _readlines(int maxindex, int maxlength, int bufsize, char ***index)
{
    *index = malloc(sizeof(char *) * maxindex);
    char *content = malloc(maxlength);
    char *buf = malloc(bufsize);
    int count = 0;
    while (1)
    {
        char *line = fgets(buf, bufsize, stdin);
        if (line == NULL || _isempty(line))
        {
            break;
        }
        else
        {
            *(*index + count) = content;
            while (*line != 0)
            {
                *content = *line;
                content++;
                line++;
            }
            *content = 0;
            content++;
            count++;
        }
    }
    free(buf);
    return count;
}

int _max(int *nums, int len)
{
    int max = 0xffffffff;
    for (int i = 0; i < len; i++)
    {
        if (max < *nums)
        {
            max = *nums;
            nums++;
        }
    }
    return max;
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
    if ((*a + *b) % 2 != 0)
    {
        if (*a % 2 == 0)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
    return *b-*a;
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
    _ssort((void **)ps, n, cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *ps[i]);
    }
    free(nums);
    return 0;
}
