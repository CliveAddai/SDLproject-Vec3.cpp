#include "Vec3.h"

// Sets x, y, z to zero
Vec3::Vec3()
{
	SetZero();
}

Vec3::Vec3(float x_, float y_, float z_)
{
	x = x_;
	y = y_;
	z = z_;
}

void Vec3::SetZero()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}


