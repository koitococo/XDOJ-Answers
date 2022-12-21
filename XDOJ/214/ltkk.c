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
    if (*(str - 1) == '\n')
    {
        len--;
    }
    return len;
}

int main(int argc, char const *argv[])
{
    char *buf = malloc(128 * sizeof(char));
    fgets(buf, 128, stdin);
    int len = _strlen(buf);
    int stat[] = {0, 0, 0, 0, 0};
    for (int i = 0; i < len; i++)
    {
        if (buf[i] >= 'A' && buf[i] <= 'Z')
        {
            stat[0]++;
        }
        else if (buf[i] >= 'a' && buf[i] <= 'z')
        {
            stat[1]++;
        }
        else if (buf[i] == ' ')
        {
            stat[2]++;
        }
        else if (buf[i] >= '0' && buf[i] <= '9')
        {
            stat[3]++;
        }
        else
        {
            stat[4]++;
        }
    }
    printf("%d %d %d %d %d", stat[0], stat[1], stat[2], stat[3], stat[4]);
    free(buf);
    return 0;
}