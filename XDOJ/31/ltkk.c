#include <stdio.h>

int gcd(int x, int y)
{
    if (x == 0 || y == 0)
    {
        return x|y;
    }
    while(y^=x^=y^=x%=y);
    return x;
}

int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d %d",&a,&b);
    printf("%d\n",gcd(a,b));
    return 0;
}