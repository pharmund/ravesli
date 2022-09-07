#include <iostream>
#include <cmath>

class Point
{
private:
	float m_a, m_b;

public:
	Point (float a = 0, float b = 0) {m_a = a; m_b = b;}

	void print()
	{
    	std::cout << "Point(" << this->m_a << ", " << this->m_b << ")" << std::endl;
	}
	float distanceTo(Point &second)
	{
		return sqrt((this->m_a - second.m_a)*(this->m_a - second.m_a) +
		(this->m_b - second.m_b)*(this->m_b - second.m_b));
	}
};

int main()
{
	Point first;
	Point second(2.0, 5.0);
	first.print();
	second.print();
	std::cout << "Distance between two points: " << first.distanceTo(second) << std::endl;

	return 0;
}