#include <stdio.h>

void *malloc(size_t size);
void free(void *ptr);

double function(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return 1.0 / (1 + function(n - 1));
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    double result = function(n);
    printf("%f", result);
    return 0;
}
