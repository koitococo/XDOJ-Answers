#include <stdio.h>
#include <stdlib.h>

int _ssort(void **values, int len, int (*cmp)(void *, void *))
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (cmp(values[i], values[j]) > 0)
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

int _cmp(char *a, char *b)
{
    return _strlen(b) - _strlen(a);
}

int readlines(int maxindex, int maxlength, int bufsize, char ***index)
{
    *index = malloc(sizeof(char *) * maxindex);
    char *content = malloc(maxlength);
    char *buf = malloc(bufsize);
    int count = 0;
    while (1)
    {
        char *line = fgets(buf, bufsize, stdin);
        if (line == NULL)
        {
            break;
        }
        else
        {
            if (_strcmp(line, "***end***\n") == 0)
            {
                break;
            }
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

int main(int argc, char const *argv[])
{
    char **indexers = NULL;
    int count = readlines(1000, 100000, 100, &indexers);
    _ssort((void **)indexers, count, _cmp);
    printf("%d\n%s", _strlen(indexers[0])-1, indexers[0]);
    return 0;
}
