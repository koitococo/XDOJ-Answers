#include <stdio.h>

void *malloc(size_t size);
void free(void *ptr);

#define bool int
#define true 1 == 1
#define false 0 == 1
#define number int

int main(int argc, char const *argv[])
{
    char *buf = malloc(128 * sizeof(char));
    fgets(buf, 128, stdin);
    int len = 0;
    while (buf[len] != 0 && buf[len] != '\n')
    {
        len++;
    }
    int copy = 0;
    scanf("%d", &copy);
    if (copy > len)
    {
        printf("error");
    }
    else
    {
        buf[len] = 0;
        printf("%s", buf + copy - 1);
    }
    free(buf);
    return 0;
}