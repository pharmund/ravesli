#include <iostream>
#include <cstdio>


using namespace std;

int howManyNames()
{
    cout << "Сколько имён вы хотите ввести?" << endl;
    int i = 0;
    cin >> i;
    return i;
}

string * enterNames(int length)
{
    string * names = new string[length];
    for (int i = 0; i < length; i++)
    {
        cout << "Введите имя #" << i+1 << ": ";
        cin >> names[i];
    }
    return names;
}

int main ()
{
    string * spisok;  
    int kolichestvo = howManyNames();
    spisok = enterNames(kolichestvo);
    for (int i = 0; i < kolichestvo; i++)
    {
        cout << spisok[i] << endl;
    }

    for (int startIndex = 0; startIndex < kolichestvo; startIndex++)
    {
        int smallestIndex = startIndex;
        for (int currentIndex = startIndex; currentIndex < kolichestvo; currentIndex++)
        {
            if (spisok[currentIndex] < spisok[smallestIndex])
                smallestIndex = currentIndex;
        }
        swap(spisok[startIndex], spisok[smallestIndex]);
    }
    cout << "Отсортированный список:" << endl;
    for (int i = 0; i < kolichestvo; i++)
        cout << "Name #" << i + 1 << ": " << spisok[i] << endl;

    delete[] spisok;
    return 0;
}