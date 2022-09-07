#include <iostream>
#include <array>



int add (int x, int y)
{
    return x + y;
}

int substruct(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return x/y;
}


int main()
{

    typedef int(*arithmeticFcn)(int,int);

    typedef struct s_arithmeticStruct
    {
        char op;
        arithmeticFcn fcn;
    }               t_arithmeticStruct;

    static t_arithmeticStruct arithmeticArray[] = {
        {'+', add},
        {'-', substruct},
        {'*', multiply},
        {'/', divide}
    };

    return 0;
}