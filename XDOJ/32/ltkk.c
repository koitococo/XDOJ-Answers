#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n,c = 0;
    scanf("%d", &n);
    while (n != 1)
    {
        n = (n % 2 ? (3 * n + 1) : (n / 2));
        c++;
    }
    printf("%d", c);

    return 0;
}