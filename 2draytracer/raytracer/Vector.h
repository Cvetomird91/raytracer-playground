#pragma once

class Vector {
	public:
		double x, y, z;
		Vector();
		Vector(double x, double y, double z);
		Vector operator-(Vector v);
		static double dot(Vector a, Vector b);
};