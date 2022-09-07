#include <iostream>
#include "Point3D.hpp"
#include "Vector3D.hpp"

void Point3D::moveByVector(const Vector3D &v)
{ 
	m_x += v.m_x;
	m_y += v.m_y;
	m_z += v.m_z;
}

void Point3D::print()
{
	std::cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
}