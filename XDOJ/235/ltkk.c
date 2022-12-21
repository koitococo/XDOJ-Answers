#include <stdio.h>

void *malloc(size_t size);
void free(void *ptr);

#define bool int
#define true 1 == 1
#define false 0 == 1
#define number int

int main(int argc, char const *argv[])
{
    int n = 0;
    scanf("%d", &n);
    char *data[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December", "wrong"};
    printf("%s", (n >= 0 && n <= 12) ? data[n - 1] : data[12]);
    return 0;
}