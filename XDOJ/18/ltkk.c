#include <stdio.h>

int main(void) {
    char a,b;
    scanf("%c,%c",&a,&b);
    printf("%d,%d",a+b-'0',a+b-'0'*2);
}