#include <iostream>

int main()
{
    int x = 4;
    std::cout << typeid(*&*&*&*&x).name() << std::endl;
}