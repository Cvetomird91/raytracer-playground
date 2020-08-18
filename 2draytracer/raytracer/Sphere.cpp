#include "Sphere.h"
#include "Vector.h"
#include <cmath>

Sphere::Sphere(Vector c, double r) {
	this->c = c;
	this->r = r;
}

bool Sphere::intersect(Ray ray, double& t) {
	Vector o = ray.o;
	Vector d = ray.d;
	Vector oc = o - c;
	double b = 2 * Vector::dot(oc, d);
	double c = Vector::dot(oc, oc) - r * r;
	double disc = b * b - 4 * c;

	if (disc < 0) return false;
	else {
		disc = sqrt(disc);
		double t0 = -b - disc;
		double t1 = -b + disc;

		t = (t0 < t1) ? t1 : t0;
		return true;
	}
}