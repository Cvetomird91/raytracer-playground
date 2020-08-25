#pragma once
#include "Vector.h"
#include "Ray.h"
#include "Color.h"

class Sphere {
public:
	Vector center;
	double radius;
	Sphere(Vector c, double r);
	bool intersect(Ray ray, double& t);
	Vector getNormal(Vector pi);
};