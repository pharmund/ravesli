#include <iostream>
#include <string>


int main()
{
    std::string hello = "Hello, world!";
    int index;

    do
    {
    std::cout << "Enter an index: ";
    std::cin >> index;

    if (std::cin.fail())
    {
    std::cin.clear();
    std::cin.ignore(32767, '\n');
    index = -1; 
    continue; 
    }

    } while (index < 0 || index >= hello.size()); 

    std::cout << "Letter #" << index << " is " << hello [index] << std::endl;

    return 0;
}