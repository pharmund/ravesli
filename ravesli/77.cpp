#include <iostream>

std::string enterName()
{
    std::string name;
    std::cout << "Enter a name: ";
    std::cin >> name;
    return name;
}

int main ()
{
    std::string name;
    std::string spisok[] = {"Sasha", "Ivan", "John", "Orlando", "Leonardo", "Nina", "Anton", "Molly"};
    name = enterName();
    for (auto &x: spisok)
    {
        if (name == x)
        {
            std::cout << name << " was found" << std::endl;
            break;
        }
        else
        {
            std::cout << name << " was not found" << std::endl;
            break;
        }      
    }
    return 0;
}


//, 