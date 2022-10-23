#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d ", c % 10);
    if (a > 5 || b < 200)
    {
        printf("no");
    }
    else
    {
        if (b >= 400)
        {
            printf("%s", c % 2 == a % 2 ? "yes" : "no");
        }
        else
        {
            printf("%s", c % 5 == a % 5 ? "yes" : "no");
        }
    }
    return 0;
}