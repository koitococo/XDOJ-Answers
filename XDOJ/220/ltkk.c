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
    char *buf = malloc(1024*64*sizeof(char));
    scanf("%s", buf);
    printf("%d", _strlen(buf));
    return 0;
}