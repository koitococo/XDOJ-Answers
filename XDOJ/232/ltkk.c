#include <stdio.h>

void *malloc(size_t size);
void free(void *ptr);

#define bool int
#define true 1 == 1
#define false 0 == 1
#define number int

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

int main(int argc, char const *argv[])
{
    char *buf = malloc(128 * sizeof(char));
    fgets(buf, 128, stdin);
    int len = _strlen(buf);
    char *p = buf, *q = buf + len - 1;
    if (*q == '\n')
    {
        q--;
    }
    bool flag = true;
    while (p < q)
    {
        if (*p != *q)
        {
            flag = false;
            break;
        }
        p++;
        q--;
    }
    if (flag)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    free(buf);
    return 0;
}