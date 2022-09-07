#include <iostream>

int input ()
{
    int x = 1;
    while (x)
    {
        std::cout << "Введите число от 1 до 9: ";
        int i;
        std::cin >> i;
        std::cin.ignore(32767, '\n');
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
        else
        {
            switch (i)
            {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                    x = 0;
                    return i;
                    break;
                default:
                    continue;
                
            }
        }
    }
}

void search_index(int * array, int x, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (x == array[i])
        {
            std::cout << i;
        }
    }
}

int main ()
{
    int x;
    x = input();
    int array[] = {7, 5, 6, 4, 9, 8, 2, 1, 3};
    int len = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < len; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
    search_index(array, x, len);
}