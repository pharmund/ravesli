#include <iostream>

class Fraction
{
private:
    int m_a;
    int m_b;
public:
    Fraction (int a, int b) {m_a = a, m_b = b;}

    void print ()
    {
        std::cout << m_a << "/" << m_b << std::endl;;
    }

    friend Fraction operator*(Fraction &f1, Fraction &f2);
    friend Fraction operator*(Fraction &f1, int x);
    friend Fraction operator*(int x, Fraction &f2);
};

Fraction operator*(Fraction &f1, Fraction &f2)
{
    return Fraction (f1.m_a * f2.m_a , f1.m_b * f2.m_b);
}

Fraction operator*(Fraction &f1, int x)
{
    return Fraction (f1.m_a * x, f1.m_b );
}

Fraction operator*(int x, Fraction &f2)
{
    return Fraction (f2.m_a * x , f2.m_b);
}



int main()
{
Fraction f1(3, 4);
f1.print();

Fraction f2(2, 7);
f2.print();

Fraction f3 = f1 * f2;
f3.print();

Fraction f4 = f1 * 3;
f4.print();

Fraction f5 = 3 * f2;
f5.print();

// Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
// f6.print();
}