#include <stdio.h>

void ft_swap(int *n1 ,int *n2)
{
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}


int main()
{
    int n1 = 10, n2 = 20;
    printf("n1 before swap : %d\n",n1);
    printf("n2 before swap : %d\n",n2);

    ft_swap(&n1,&n2);

    printf("n1 before swap : %d\n",n1);
    printf("n2 before swap : %d\n",n2);

    
    return 0;
}

