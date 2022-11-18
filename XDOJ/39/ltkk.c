#include <stdio.h>
void *malloc(size_t size);
void free(void *ptr);

int main(int argc, char const *argv[])
{
    int h, w;
    scanf("%d %d", &h, &w);
    int *buf = malloc(sizeof(int) * h * w);
    for (int i = 0; i < h * w; i++)
    {
        scanf("%d", &buf[i]);
    }
    char *buf2 = malloc(sizeof(char) * h * w);
    for (int i = 0; i < h*w; i++)
    {
        buf2[i] = 0;
    }
    for (int x = 0; x < w; x++)
    {
        int max = 0xffffffff, loc = -1;
        for (int y = 0; y < h; y++)
        {
            if (buf[x + y * w] > max)
            {
                max = buf[x + y * w];
                loc = x + y * w;
            }
        }
        buf2[loc] += 1;
    }
    for (int y = 0; y < h; y++)
    {
        int min = 0x7fffffff, loc = -1;
        for (int x = 0; x < w; x++)
        {
            if (buf[x + y * w] < min)
            {
                min = buf[x + y * w];
                loc = x + y * w;
            }
        }
        buf2[loc] += 1;
    }
    int count = 0;
    for (int i = 0; i < w * h; i++)
    {
        if (buf2[i] == 2)
        {
            printf("%d %d %d\n", i / w, i % w, buf[i]);
            count++;
        }
    }
    if (count == 0)
    {
        printf("no\n");
    }
    free(buf);
    free(buf2);
    return 0;
}
