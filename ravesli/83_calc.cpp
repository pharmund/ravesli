#include <iostream>

char enter_sign ()
{
    std::cout << "Выберете знак +, -, * или /" << std::endl;
    char z;
    std::cin >> z;
    return z;
}

void enter_values (int &x, int &y)
{
    std::cout << "Введите первое значение" << std::endl;
    std::cin >> x;
    std::cout << "Введите второе значение" << std::endl;
    std::cin >> y;
}

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

typedef int (*arithmeticFcn) (int, int);

arithmeticFcn getArithmeticFcn(char z)
{
    switch (z)
    {
        case '+': return add; 
        case '-': return substruct;
        case '*': return multiply;
        case '/': return divide;
        default: exit(1);
    }
}

int main()
{
    char z = enter_sign();
    int x, y;
    enter_values(x,y);
    std::cout << "Ответ:" << std::endl << getArithmeticFcn(z)(x, y) << std::endl;
    return 0;
}