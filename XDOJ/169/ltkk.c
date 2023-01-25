#include <stdio.h>

void *malloc(int size);
void free(void *ptr);

#define bool int
#define true 1 == 1
#define false 0 == 1
#define number int

number sum(number num[], int count)
{
    number _sum = 0;
    for (int i = 0; i < count; i++)
    {
        _sum += num[i];
    }
    return _sum;
}

void __ssort(void *values[], int len, int (*cmp)(void *, void *))
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (cmp(values[i], values[j]) > 0) // return i>j, ascending
            {
                void *tmp = values[i];
                values[i] = values[j];
                values[j] = tmp;
            }
        }
    }
}

struct entity
{
    int date;
    int size;
};
typedef struct entity entity;
#define size_of_entity sizeof(entity)

int cmp(entity *a, entity *b)
{
    return ((a->date == b->date) && (a->size < b->size)) || (a->date < b->date);
}

// main entry point
int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    entity *data = malloc(num * size_of_entity);
    for (int i = 0; i < num; i++)
    {
        int n[4];
        scanf("%d/%d/%d %d", &n[0], &n[1], &n[2], &n[3]);
        data[i].date = n[0] * 10000 + n[1] * 100 + n[2];
        data[i].size = n[3];
    }
    void **ptrs = malloc(num * sizeof(void *));
    for (int i = 0; i < num; i++)
    {
        ptrs[i] = &data[i];
    }
    __ssort(ptrs, num, cmp);
    for (int i = 0; i < num; i++)
    {
        entity *e = ptrs[i];
        printf("%d/%d/%d %d\n", e->date / 10000, e->date / 100 % 100, e->date % 100, e->size);
    }
    free(ptrs);
    free(data);
}