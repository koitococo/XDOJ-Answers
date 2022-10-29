#include <stdio.h>

int factor(int n, int *p)
{
    int m = (n + 1) / 2;
    m -= (m == n);
    while (*p < m)
    {
        (*p)++;
        if (n % *p == 0)
        {
            return *p;
        }
    }
    return -1;
}

int test(int n)
{
    int t = -1, p = 0, sum = 0;
    while (1)
    {
        t = factor(n, &p);
        if (t < 0)
        {
            break;
        }
        sum += t;
    }
    return n == sum;
}

int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i < b + 1; i++)
    {
        if (test(i))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
