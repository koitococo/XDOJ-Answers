#include <stdio.h>

void *malloc(size_t size);
void free(void *ptr);

#define bool int
#define true 1
#define false 0
#define number long long int

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
    char *str = malloc(1024);
    scanf("%s", str);
    int len = _strlen(str);
    char *buf = malloc(len + 1);
    char *p = buf;
    for (int i = 0; i < len; i++)
    {
        if (i % 2 == 0)
        {

            *p = str[i];
            p++;
        }
    }
    *p = 0;
    printf("%s", buf);
    free(str);
    return 0;
}