#include <stdio.h>

void swap(int *q, int *b)
{
    if (*q > *b)
    {
        int t = *q;
        *q = *b;
        *b = t;
    }
}

int main(int argc, char const *argv[])
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    swap(&a, &b);
    swap(&b, &c);
    if (a + b < c)
    {
        printf("no");
    }
    else
    {
        printf("%d", a + b + c);
    }
    return 0;
}
