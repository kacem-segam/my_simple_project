#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int generate_rand_num(int from ,int to)
{
    int r_num = rand() % (to - from +1) +from;
    return (r_num);
}

// int main()
// {
//     srand((unsigned) time (NULL));

//     printf("%d",generate_rand_num(1,10));

//     return 0;
// }

