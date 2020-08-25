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

Vector Vector::operator+(Vector v) {
	return Vector(this->x + v.x, this->y + v.y, this->z + v.z);
}

Vector Vector::operator*(double d) {
	return Vector(x * d, y * d, z * d);
}

Vector Vector::operator/(double d) {
	return Vector(x / d, y / d, z / d);
}

double Vector::dot(Vector a, Vector b) {
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}

Vector Vector::normalize() {
	double mg = sqrt(x * x + y * y + z * z);
	return Vector(x / mg, y / mg, z / mg);
}