#include <stdlib.h>
#include <time.h>

int generate_rand_num(int from ,int to)
{
    int r_num = rand() % (to - from +1) +from;
    return (r_num);
}

int *fill_arr_with_rand_num(int nb)
{
    int *arr = malloc(nb * sizeof(int));
    int i = 0;
    while (i < nb)
    {
        arr[i] = generate_rand_num(1,100);
        i++;
    }
    return (arr);
}
