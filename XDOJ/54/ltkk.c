#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for (int b = 0; b < 10; b++)
    {
        if ((n - 20 * b) % 101 == 0)
        {
            int t = (n - 20 * b) / 101;
            for (int a = 0; a < 10; a++)
            {
                if (t-a>9)
                {
                    continue;
                }
                printf("%d %d %d\n", a, b, t - a);
            }
        }
    }
    return 0;
}