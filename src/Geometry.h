#ifndef GEOMETRY_H
#define GEOMETRY_H

/*
 * Geometry.h
 * 2010-03-09
 *
 * A set of classes that deal with common geometry we plan to use in making
 * games. Currently mostly 2D.
 */

/*
 * A 2-Dimensional vector.
 */
class Vector2 {
private:
	float i;
	float j;
public:
	Vector2();
	Vector2(const float i_, const float j_);
	Vector2(const Vector2&);

	// Get the magnitude squared. Prefer this if possible.
	// Avoids a costly square root operation.
	float get_magnitude_sq() const;

	// Get the magnitude. Slower than above, but sometimes necessary.
	float get_magnitude() const;

	// Result of vector addition
	Vector2 operator+(const Vector2&) const;

	// Result of vector subtraction
	Vector2 operator-(const Vector2&) const;

	// Result of scalar product (dot product, inner product)
	float operator*(const Vector2&) const;
};

#endif
