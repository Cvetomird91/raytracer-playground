#include "Color.h"

Color::Color() { r = g = b = 0; }

Color::Color(double r, double g, double b) {
			this->r = r;
			this->g = g;
			this->b = b;
}

Color Color::operator*(double d)
{
	return Color(r * d, g * d, b * d);
}

Color Color::operator+(Color c)
{
	return Color((r + c.r)/2, (g + c.g)/2, (b + c.b)/2);
}
