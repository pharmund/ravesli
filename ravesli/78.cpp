#include <iostream>

enum Player
{
    Health_Potion,
    Torchs,
    Arrows,
};

int countTotallItems(int * array, int length)
{
    //return (array[0] + array[1] + array[2]);
    int result = 0;
    for (int i = 0; i < length  ;i++)
        result += array[i];
    return result;
}
int main ()
{
    int array[3];
    int length = sizeof(array)/sizeof(array[0]);
    array[Health_Potion] = 3;
    array[Torchs] = 6;
    array[Arrows] = 12;

    std::cout << countTotallItems(array, length);
    return 0;
}