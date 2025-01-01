#include <unistd.h>

void my_putstr(char *str);



int main()
{
    my_putstr("hello world\n");

    return 0;
}

void my_putstr(char *str){
    while (*str)
    {
        write(1,str++,1);
    }
    
}