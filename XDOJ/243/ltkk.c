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
    char *name;
    int num;
    int n2;
};
typedef struct entity entity;
#define size_of_entity sizeof(entity)

int cmp(entity *a, entity *b)
{
    return ((a->num == b->num) && (a->n2 < b->n2)) || (a->num < b->num);
}

// main entry point
int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    entity *data = malloc(num * size_of_entity);
    for (int i = 0; i < num; i++)
    {
        char *tmp = malloc(100);
        int n[6];
        scanf("%s %d %d %d %d %d %d", tmp, &n[0], &n[1], &n[2], &n[3], &n[4], &n[5]);
        data[i].name = tmp;
        data[i].num = sum(n, 6);
        data[i].n2 = n[5];
    }
    void **ptrs = malloc(num * sizeof(void *));
    for (int i = 0; i < num; i++)
    {
        ptrs[i] = &data[i];
    }
    __ssort(ptrs, num, cmp);
    for (int i = 0; i < num; i++)
    {
        printf("%s %d %d\n", ((entity *)ptrs[i])->name, ((entity *)ptrs[i])->num, ((entity *)ptrs[i])->n2);
    }
    for (int i = 0; i < num; i++)
    {
        free(data[i].name);
    }
    free(ptrs);
    free(data);
}