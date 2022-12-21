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
    int maxlen = 0, len = 0;
    char *p = buf;
    while (*p != 0)
    {
        if (*p >= 'A' && *p <= 'z')
        {
            len++;
            if (len > maxlen)
            {
                maxlen = len;
            }
        }
        else
        {
            len = 0;
        }
        p++;
    }
    printf("%d", maxlen);
    free(buf);
    return 0;
}