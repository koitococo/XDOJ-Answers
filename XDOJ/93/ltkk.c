#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    scanf("%d %d",&a,&b);

    if (a<b)
    {
        int t = b;
        b = a;
        a = t;
    }

    printf("%d %d",a%10, b*b);

    return 0;
}
