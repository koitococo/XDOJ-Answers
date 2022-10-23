#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;
    scanf("%d",&c);
    printf("%s",c % 35 ? "no":"yes");
    return 0;
}
