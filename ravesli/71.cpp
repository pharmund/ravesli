#include <iostream>

void sumTo (int x)
{
    for (int result = 0, x; result > x ; result += x, x--)
        std::cout << result;
}

int main()
{
    sumTo(5);
    return 0;
}