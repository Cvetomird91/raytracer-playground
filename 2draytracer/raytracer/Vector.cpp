#pragma once
#include <cmath>

#include "Vector.h"

Vector::Vector() {
	x = y = z = 0;
}

Vector::Vector(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector Vector::operator-(Vector v) {
	return Vector(this->x - v.x, this->y - v.y, this->z - v.z);
}

double Vector::dot(Vector a, Vector b) {
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}