#include <iostream>

void ft_print(char * str)
{
    while (*str != '\0')
    {
        std::cout << *str;
        str++;
    }
}

int main()
{
    ft_print("Hello, world!");
    return 0;
}