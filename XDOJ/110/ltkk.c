#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;
    scanf("%d",&c);
    printf("%s",c % 2 ? "odd":"even");
    return 0;
}
