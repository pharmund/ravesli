#include <functional>
#include <iostream>

void repeat(int repetitions, const std::function<void(int)>& fn)
{
    for (int i{ 0 }; i < repetitions; ++i)
    {
        fn(i);
    }
}

int main()
{
    repeat(3, [](int i) {
    std::cout << i << '\n';
    });

    return 0;
}