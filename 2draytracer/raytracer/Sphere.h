#pragma once
#include "Vector.h"
#include "Ray.h"
#include "Color.h"

class Sphere {
public:
	Vector c;
	double r;
	Sphere(Vector c, double r);
	bool intersect(Ray ray, double& t);
};