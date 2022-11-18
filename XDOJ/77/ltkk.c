#include <stdio.h>
void *malloc(size_t size);
void free(void *ptr);

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

int main(int argc, char const *argv[])
{
    char buf[100];
    fgets(buf, 100, stdin);
    int ns[2] = {0, 0};
    int ni = 0;
    char op;
    for (int i = 0; i < _strlen(buf); i++)
    {
        if (buf[i] == ' ')
        {
            continue;
        }   
        if (_indexof(buf[i], "+-*/%%") != -1)
        {
            op = buf[i];
            continue;
        }
        while (_indexof(buf[i], "0123456789") != -1)
        {
            ns[ni] *= 10;
            ns[ni] += buf[i] - '0';
            i++;
        }
        ni++;
    }
    switch (op)
    {
    case '+':
        printf("%d", ns[0] + ns[1]);
        break;
    case '-':
        printf("%d", ns[0] - ns[1]);
        break;
    case '*':
        printf("%d", ns[0] * ns[1]);
        break;
    case '/':
        printf("%d", ns[0] / ns[1]);
        break;
    case '%':
        printf("%d", ns[0] % ns[1]);
        break;
    default:
        break;
    }
    return 0;
}
