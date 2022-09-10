#include <iostream>

class Something
{
private:
    double m_a, m_b, m_c;
public:
    Something (double a = 0.0, double b = 0.0, double c = 0.0) : m_a(a), m_b(b), m_c(c) {}

    void print ()
    {
        std::cout << m_a << "," << m_b << "," << m_c << std::endl;;
    }

    Something operator+ () const
    {
        return Something(-m_a, -m_b, -m_c);
    }

    double getA() { return m_a; }
    double getB() { return m_b; }
    double getC() { return m_c; }
};

int main()
{
    Something x(-1,-2,-3);
    Something y = + x;
    
    x.print();
    y.print();
    return 0;
}