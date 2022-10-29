#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int t = n * n * n;
    for (int i = 0; ; i++)
    {
        int s = (2 * i + 2 * n - 2) * n / 2;
        // printf("%d",s);
        if (s == t)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", i + 2 * j);
            }
            break;
        }
    }

    return 0;
}