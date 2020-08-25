#pragma once

class Vector {
	public:
		double x, y, z;
		Vector();
		Vector(double x, double y, double z);
		Vector operator-(Vector v);
		Vector operator+(Vector v);
		Vector operator*(double d);
		Vector operator/(double d);
		static double dot(Vector a, Vector b);
		Vector normalize();
};