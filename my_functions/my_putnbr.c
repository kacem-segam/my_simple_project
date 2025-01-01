#include <unistd.h>

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1,"-2147483648",11);
    }
    if (nb < 0)
    {
        write(1,"-",1);
        nb = -nb;
        ft_putnbr(nb);
    }
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else{
        char num = nb+'0';
        write(1,&num,1);
    }
    
}