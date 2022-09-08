#include <iostream>

class Dollars
{
private:
    int m_dollars;
public:
    Dollars(int dollars) {m_dollars = dollars;}

    friend Dollars operator*(const Dollars &d1, const Dollars &d2);
    friend Dollars operator+(const Dollars &d1, const Dollars &d2);
    int getDollars() const {return m_dollars;}
};

Dollars operator*(const Dollars &d1, const Dollars &d2)
{
    return Dollars (d1.m_dollars * d2.m_dollars);
}

Dollars operator+(const Dollars &d1, const Dollars &d2)
{
    return Dollars (d1.m_dollars + d2.m_dollars);
}


int main()
{
    Dollars dollars1(7);
    Dollars dollars2(9);
    Dollars dollarsX = dollars1 * dollars2;
    Dollars dollarsSum = dollars1 + dollars2;
    std::cout << "I have " << dollarsSum.getDollars() << " dollars." << std::endl;
    std::cout << "I have " << dollarsX.getDollars() << " dollars." << std::endl;
}