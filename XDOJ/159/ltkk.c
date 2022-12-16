#include <stdio.h>

void *malloc(size_t size);
void free(void *ptr);

#define bool int
#define true 1
#define false 0
#define number long long int

int main(int argc, char const *argv[])
{
    int m,n;
    scanf("%d %d",&m, &n);
    number prod = 1;
    for (number i = n+1; i <= m; i++)
    {
        prod *= i;
    }
    for (number i = 1; i <= m-n; i++)
    {
        prod /= i;
    }  
    printf("%lld.00", prod);
    return 0;
}