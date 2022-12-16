#include <stdio.h>

void *malloc(size_t size);
void free(void *ptr);

#define bool int
#define true 1 == 1
#define false 0 == 1
#define number int

number pow(number base, int exp)
{
    number reuslt = 1;
    for (int i = 0; i < exp; i++)
    {
        reuslt *= base;
    }
    return reuslt;
}

bool filter(number num)
{
    number n = num;
    int l = 0;
    while (pow(10, l) <= n)
    {
        l++;
    }
    if (l < 3)
    {
        return false;
    }
    number t = 0;
    for (int i = 0; i < l; i++)
    {
        t += pow(n % 10, l);
        n /= 10;
    }
    return t == num;
}

int function(int a, int b)
{
    if (a > b)
    {
        int t = a;
        a = b;
        b = t;
    }
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if (filter(i))
        {
            printf("%d ", i);
            count++;
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", function(a, b));
    return 0;
}