#include <stdio.h>
void *malloc(size_t size);
void free(void *ptr);

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int *nums = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", nums + i);
    }
    int maxLoc = -1, maxVal = 0xffffffff;
    for (int i = 0; i < n; i++)
    {
        if (maxVal < nums[i])
        {
            maxLoc = i;
            maxVal = nums[i];
        }
    }
    printf("%d %d %d", n, maxVal, maxLoc);
    free(nums);
    return 0;
}
