#include "Vector3D.hpp"
#include "Point3D.hpp"


int main()
{
    Point3D p(3.0, 4.0, 5.0);
    Vector3D v(3.0, 3.0, -2.0);
    p.print();
    p.moveByVector(v);
    p.print();
}