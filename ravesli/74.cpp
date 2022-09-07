#include <iostream>

int main()
{
    int b = 7;
    std::cout << b << std::endl;
    std::cout << &b << std::endl;
    std::cout << *&*&b << std::endl;

    int value = 5;
    int * ptr = & value;
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << *(ptr + 3) << std::endl;
    std::cout << &*(ptr + 3) << std::endl;

}