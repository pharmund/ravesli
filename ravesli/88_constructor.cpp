#include <iostream>

class Ball 
{
private:
    std::string m_color = "Red";
    float m_radius = 20.0;
    // std::string m_color;
    // float m_radius;
public:
    Ball (std::string color , float radius ){m_color = color, m_radius = radius;};
    Ball (std::string color){m_color = color;};
    Ball (float radius){m_radius = radius;};
    Ball(){};

    void print()
    {
        std::cout << m_color << ' ' << m_radius << std::endl;
    }
};



int main()
{
    Ball def;
    def.print();

    Ball black("black");

    black.print();

    Ball thirty(30.0);
    thirty.print();

    Ball blackThirty("black", 30.0);
    blackThirty.print();

return 0;
}