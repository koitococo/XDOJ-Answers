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
    char *str = malloc(100);
    scanf("%s", str);
    int len = _strlen(str);
    char *buf = malloc(sizeof(char) * (len + 1));
    for (int i = 0; i < len; i++)
    {
        buf[len - i-1] = str[i];
    }
    buf[len] = 0;
    printf("%s", buf);
}