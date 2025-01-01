

int check_is_perfect_num(int nb)
{
    if (nb <= 0)
    {
        return 0;
    }

    int i = 1 , count = 0;
    while (i < nb)
    {
        if (nb % i == 0)
        {
            count += i;
        }
        i++;
    }
    return nb == count;
}


