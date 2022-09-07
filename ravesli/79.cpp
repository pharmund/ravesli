#include <iostream>

typedef struct  s_journal
{
    std::string name;
    int grade;
}               t_journal;

int howManyStudents()
{
    int x = 1;
    while (x)
    {
        std::cout << "Данные скольких учеников вы хотите ввести?" << std::endl;
        int number_of_students;
        std::cin >> number_of_students;
        std::cin.ignore(32767, '\n');
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
        else
            x = 0;
            return number_of_students;
    }
}

void enterNamesAndGrades(s_journal * journal, int number_of_students)
{

    for (int i = 0; i < number_of_students; i++)
    {
        std::cout << "Введите имя: " << std::endl;
        std::cin >> journal[i].name;
        std::cout << "Введите оценку: " << std::endl;
        std::cin >> journal[i].grade;
    }
}

void sorting(s_journal * journal, int number_of_students)
{
    for (int startIndex = 0; startIndex < number_of_students; startIndex++)
    {
        int smallestIndex = startIndex;
        for (int currentIndex = startIndex; currentIndex < number_of_students; currentIndex++)
        {
            if (journal[currentIndex].grade > journal[smallestIndex].grade)
                smallestIndex = currentIndex;
        }
        std::swap(journal[startIndex], journal[smallestIndex]);
    }
}

void ft_print (s_journal * journal, int number_of_students)
{
    for (int i = 0; i < number_of_students; i++)
    {
        std::cout << journal[i].name << " got a grade of " << journal[i].grade << std::endl;
    }
}

int main ()
{
    int number_of_students = howManyStudents();
    s_journal * journal = new s_journal[number_of_students];
    enterNamesAndGrades(journal, number_of_students);
    sorting(journal, number_of_students);
    ft_print(journal, number_of_students);
    delete journal;

    //std::cout << journal[1].name << journal[1].grade;

    return 0;
}