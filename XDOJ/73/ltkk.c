#include <stdio.h>
void *malloc(size_t size);
void free(void *ptr);

int _indexof(char k, char *str)
{
    int index = 0;
    while (*str != 0)
    {
        if (*str == k)
        {
            return index;
        }
        *str++;
        index++;
    }
    return -1;
}

int _readint(char **strptr){
    int num = 0;
    while (**strptr >= '0' && **strptr <= '9')
    {
        num = num * 10 + (**strptr - '0');
        (*strptr)++;
    }
    return num;
}

int main(int argc, char const *argv[])
{
    char buf[100];
    fgets(buf, 100, stdin);
    char *ptr = buf;
    while (*ptr != 0)
    {
        if (_indexof(*ptr, "0123456789") == -1)
        {
            printf("%c", *ptr);
            ptr++;
        }
        else
        {
            char c = *(ptr-1);
            int n =_readint(&ptr);
            for (int i = 0; i < n-1; i++)
            {
                printf("%c", c);
            }
        }
    }
    return 0;
}
