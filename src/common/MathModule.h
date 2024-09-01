/**
 * Copyright (c) 2006-2024 LOVE Development Team
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 **/

#ifndef LOVE_MATH_MODMATH_H
#define LOVE_MATH_MODMATH_H


// LOVE
#include "math.h"
#include "Vector.h"
#include "int.h"


// STL
#include <vector>

namespace love
{

class BezierCurve;
class Transform;

struct Triangle
{
	Triangle(const Vector2 &x, const Vector2 &y, const Vector2 &z)
		: a(x), b(y), c(z)
	{}
	Vector2 a, b, c;

	std::string __str__() const {
		return "((" + std::to_string(a.x) + ", " + std::to_string(a.y) + "),"
		"(" + std::to_string(b.x) + ", " + std::to_string(b.y) + ")"
		"(" + std::to_string(c.x) + ", " + std::to_string(c.y) + "))";
	}
};

/**
 * Triangulate a simple polygon.
 *
 * @param polygon Polygon to triangulate. Must not intersect itself.
 * @return List of triangles the polygon is composed of.
 **/
std::vector<Triangle> triangulate(const std::vector<love::Vector2> &polygon);

/**
 * Checks whether a polygon is convex.
 *
 * @param polygon Polygon to test.
 * @return True if the polygon is convex, false otherwise.
 **/
bool isConvex(const std::vector<love::Vector2> &polygon);

/**
 * Converts a value from the sRGB (gamma) colorspace to linear RGB.
 **/
float gammaToLinear(float c);

/**
 * Converts a value from linear RGB to the sRGB (gamma) colorspace.
 **/
float linearToGamma(float c);

/**
 * Calculate noise for the specified coordinate(s).
 *
 * @return Noise value in the range of [0, 1].
 **/
static double simplexNoise1(double x);
static double simplexNoise2(double x, double y);
static double simplexNoise3(double x, double y, double z);
static double simplexNoise4(double x, double y, double z, double w);
static double perlinNoise1(double x);
static double perlinNoise2(double x, double y);
static double perlinNoise3(double x, double y, double z);
static double perlinNoise4(double x, double y, double z, double w);


class Math
{
public:

	Math();
	virtual ~Math();

	/**
	 * Creates a new bezier curve.
	 **/
	BezierCurve *newBezierCurve(const std::vector<Vector2> &points);

	Transform *newTransform();
	Transform *newTransform(float x, float y, float a, float sx, float sy, float ox, float oy, float kx, float ky);

}; // Math


} // love

#endif
