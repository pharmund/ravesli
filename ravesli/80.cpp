#include <iostream>

void change(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    
    int x = 1, y = 2;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    change(x, y);
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    return 0;
}