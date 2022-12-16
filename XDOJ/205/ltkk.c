#include <stdio.h>

void *malloc(size_t size);
void free(void *ptr);

#define bool int
#define true 1
#define false 0
#define number long long int

int main(int argc, char const *argv[])
{
    char c;
    int n;
    scanf("%c", &c);
    scanf("%d", &n);

    int maxlen = n * 2 - 1;
    char *buf2 = malloc(sizeof(char) * maxlen);
    char *buf3 = malloc(sizeof(char) * maxlen);

    for (int i = 0; i < n; i++)
    {
        char *p = buf2;
        *p = c;
        p++;
        for (int j = 0; j < i; j++)
        {
            *p = ' ';
            p++;
            *p = c;
            p++;
        }
        int len = (int)p - (int)buf2;
        int pad = maxlen - len;
        int halfpad = pad / 2;
        char *q = buf3;
        if (pad % 2 == 1)
        {
            *q = ' ';
            q++;
        }
        for (int j = 0; j < halfpad; j++)
        {
            *q = ' ';
            q++;
        }
        for (int j = 0; j < len; j++)
        {
            *q = buf2[j];
            q++;
        }
        *q = 0;
        printf("%s\n",buf3);
    }
}