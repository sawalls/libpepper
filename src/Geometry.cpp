/*
 * Geometry.cpp
 * 2010-03-09
 *
 * A set of classes that deal with common geometry we plan to use in making
 * games. Currently mostly 2D. This is the implementation
 */

#include "Geometry.h"

#include <cmath>

Vector2::Vector2():i(0f), j(0f)
{
}

Vector2::Vector2(const float i_, const float j_): i(i_), j(j_)
{
}

Vector2::Vector2(const Vector2& b): i(b.i), j(b.j)
{
}

float get_magnitude_sq() const
{
	return i*i + j*j;
}

float get_magnitude() const
{
	return sqrt(get_magnitude_sq());
}

Vector2 operator+(const Vector2& rhs) const
{
	return Vector2(i + rhs.i, j + rhs.j);
}

Vector2 operator-(const Vector2& rhs) const
{
	return Vector2(i - rhs.i, j - rhs.j);
}

float operator*(const Vector2& rhs) const
{
	return i * rhs.i + j * rhs.j;
}
