#pragma once
#include "Vector.h"

class Ray {
	public:
		Vector o;					//Origin
		Vector d;					//Direction
		Ray(Vector o, Vector j);
};