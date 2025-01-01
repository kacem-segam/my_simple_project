#include <stdio.h>

int check_is_prime(int nb)
{
    if (nb <= 0)
    {
        return 0;
    }
    else if (nb == 1)
    {
        return 1;
    }
    int i = 2;
    while (i < nb)
    {
       if (!(nb % i))
       {
        return 0;
       }
       i++;
    }
    return 1;
}



// int main()
// {
//     printf("%d",check_is_prime(10));


//     return 0;
// }