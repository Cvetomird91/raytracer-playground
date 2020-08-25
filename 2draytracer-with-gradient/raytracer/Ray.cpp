#include "Ray.h"
#include "Vector.h"

Ray::Ray(Vector o, Vector d) {
	this->o = o;
	this->d = d;
}