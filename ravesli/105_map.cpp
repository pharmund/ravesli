#include <iostream>
#include <vector>
#include <string>

struct StudentGrade
{
    std::string name;
    char grade;
};

class GradeMap
{
private:
    std::vector<StudentGrade> m_map;
public:
    GradeMap(){};
    char & operator[](std::string name);
};

char & GradeMap::operator[](std::string name)
{
    for (auto &ref : m_map)
    {
        if (ref.name == name)
            return ref.grade;  
    }


    StudentGrade temp { name, ' ' };
    m_map.push_back(temp);
    return m_map.back().grade;
}

int main()
{
    GradeMap grades;
    grades["John"] = 'A';
    grades["Martin"] = 'B';
    std::cout << "John has a grade of " << grades["John"] << '\n';
    std::cout << "Martin has a grade of " << grades["Martin"] << '\n';

    return 0;
}