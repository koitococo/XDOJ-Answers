#include <stdio.h>

void *malloc(int size);
void free(void *ptr);

#define bool int
#define true 1 == 1
#define false 0 == 1
#define number int

int main(int argc, char const *argv[])
{
    int *a = malloc(20 * sizeof(int));
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &a[i]);
    }
    double sum = 0;
    for (int stu = 0; stu < 5; stu++)
    {
        sum += a[stu * 4];
    }
    printf("%.1f ", sum / 5);
    int count = 0;
    for (int stu = 0; stu < 5; stu++)
    {
        int fails = 0;
        for (int sub = 0; sub < 4; sub++)
        {
            if (a[stu * 4 + sub] < 60)
            {
                fails += 1;
            }
        }
        if (fails >= 2)
        {
            count += 1;
        }
    }
    printf("%d ", count);
    count = 0;
    for (int stu = 0; stu < 5; stu++)
    {
        int sum = 0;
        for (int sub = 0; sub < 4; sub++)
        {
            sum += a[stu * 4 + sub];
        }
        if (sum >= 90 * 4)
        {
            count += 1;
            continue;
        }
        else
        {
            bool good = true;
            for (int sub = 0; sub < 4; sub++)
            {
                if (a[stu * 4 + sub] < 85)
                {
                    good = false;
                    break;
                }
            }
            if (good)
            {
                count += 1;
                continue;
            }
        }
    }
    printf("%d", count);
    return 0;
}