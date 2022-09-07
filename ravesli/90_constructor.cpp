#include <iostream>
#include <cstdint>

class RGBA
{
private:
    std::uint8_t m_red;
    std::uint8_t m_green;
    std::uint8_t m_blue;
    std::uint8_t m_alpha;

public:
    RGBA(std::uint8_t red, std::uint8_t green, std::uint8_t blue, std::uint8_t alpha = 255) 
    : m_red(0), m_green(0), m_blue(0) {
        m_red = red; 
        m_green = green; 
        m_blue = blue; 
        m_alpha = alpha;
    };

    void print() {
        std::cout << int(m_red) << int(m_green) << int(m_blue) << int(m_alpha);
    }
};

int main()
{
    RGBA color(0, 135, 135, 121);
    color.print();

    return 0;
}