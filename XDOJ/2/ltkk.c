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

int strcmp(char *strA, char *strB)
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

int strlen(char *str)
{
    int len = 0;
    while (*str != 0)
    {
        len++;
        str++;
    }
    return len;
}

int _split(char *str, char *segments[], int maxCount, char *separator)
{
    segments[0] = str;
    int index = 1;
    int sepLen = strlen(separator);
    while (index < maxCount)
    {
        if (strcmp(str, separator) == 0)
        {
            segments[index] = str;
            str += sepLen;
            index++;
        }
        else
        {
            str++;
        }
    }
    return index + 1;
}

int charcpy(char* src,char* dest,int len){
    for (int i = 0; i < len; i++)
    {
        *dest = *src;
        dest++;
        src++;
    }
    return 0;
}

int _substring(char *str, int offset, int len, char *buf)
{
    if (offset < 0)
    {
        return -1;
    }
    str += offset;
    charcpy(str,buf,len);
    return 0;
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int *mem = malloc(n*4);
    int *p = mem;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", p);
        p++;
    }
    p = mem;
    int last = -114514,count = 0;
    for (int i = 0; i < n; i++)
    {
        if (last != p[i])
        {
            count++;
            last = p[i];
        }
    }
    printf("%d",count);
    free(mem);

    return 0;
}
