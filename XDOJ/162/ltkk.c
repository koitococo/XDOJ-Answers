#include <stdio.h>
void *malloc(size_t size);
void free(void *ptr);

void matmul(int m, int p, int n, int *a, int *b, int *c)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int k = 0; k < p; k++)
            {
                sum += a[i * p + k] * b[k * n + j];
            }
            c[i * m + j] = sum;
        }
    }
}

int main(int argc, char const *argv[])
{
    int a[6], b[6], c[4];
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &b[i]);
    }
    matmul(2, 3, 2, a, b, c);
    printf("%5d%5d%5d\n%5d%5d%5d\n\n", a[0], a[1], a[2], a[3], a[4], a[5]);
    printf("%5d%5d\n%5d%5d\n%5d%5d\n\n", b[0], b[1], b[2], b[3], b[4], b[5]);
    printf("%5d%5d\n%5d%5d", c[0], c[1], c[2], c[3]);
    return 0;
}
