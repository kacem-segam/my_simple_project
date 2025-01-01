#include <unistd.h>

void my_putstr(char *str);
char revCharsToFront(char c);
char revCharsToBack(char c);
char *encryption(char *str);
char *decryption(char *str);

int main()
{
    char *str1 = encryption("kacem segam");

    my_putstr("string after encryption : "); 
    my_putstr(str1);

    char *str2 = decryption(str1);
    
    my_putstr("\nstring after decryption : ");
    my_putstr(str2);


    return 0;
}


void my_putstr(char *str)
{
    while (*str)
    {
        write(1,str++,1);
    }
}
char revCharsToFront(char c)
{
    int i = 0;
    if (c == 'Z' || c == 'Y')
    {
        if (c == 'Z')
        {
            return 'B';
        }
        else{
            return 'A';
        }
        
    }
    else if (c == 'z' || c == 'y')
    {
        if (c == 'z')
        {
            return 'b';
        }
        else{
            return 'a';
        }
    }

    if (c >= 'A' && c <= 'Z')
    {
        return (c + 2);
    }
    else if (c >= 'a' && c <= 'z')
    {
        return (c + 2);
    }
}
char revCharsToBack(char c)
{
    if (c == 'A' || c == 'B')
    {
        if (c == 'A')
        {
            return 'Y';
        }
        else{
            return 'Z';
        } 
    }
    else if (c == 'a' || c == 'b')
    {
        if (c == 'a')
        {
            return 'y';
        }
        else{
            return 'z';
        }
    }
    if (c >= 'C' && c <= 'X')
    {
        return (c - 2);
    }
    else if (c >= 'c' && c <= 'x')
    {
        return (c - 2);
    }
}
char *encryption(char *str)
{
    int i = 0;
    char *ptr;
    while (str[i])
    {
        ptr[i] = revCharsToFront(str[i]);
        i++;
    }

    ptr[i] = '\0';
    return ptr;    
}
char *decryption(char *str)
{
    int i = 0;
    char *ptr;
    while (str[i])
    {
        ptr[i] = revCharsToBack(str[i]);
        i++;
    }
    ptr[i] = '\0';
    return (ptr); 
}

