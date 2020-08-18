#include <fstream>
#include "Ray.h"
#include "Vector.h"
#include "Sphere.h"
#include "Color.h"

int main() {

	const int W = 500;	//Image width
	const int H = 500;	//Image height

	std::ofstream out("out.ppm");
	out << "P3\n" << W << '\n' << H << '\n' << "255\n";

	Color** pixel_col = new Color * [H];
	for (int i = 0; i < H; ++i) {
		pixel_col[i] = new Color[W];
	}

	Color *white = new Color(255, 255, 255);
	Sphere *sphere = new Sphere(Vector(W / 2, H / 2, 50), 20);

	//for each pixel
	for (int y = 0; y < H; y++) {

		for (int x = 0; x < W; x++) {

			//send a ray through each pixel
			Ray *ray = new Ray(Vector(x, y, 0), Vector(0, 0, 1));

			double t = 20000;

			//Check for intersections
			if (sphere->intersect(*ray, t)) {
				//color the pixel
				pixel_col[y][x] = *white;
			}

			out << pixel_col[y][x].r << std::endl;
			out << pixel_col[y][x].g << std::endl;
			out << pixel_col[y][x].b << std::endl;

			delete ray;
		}
	}

	delete white;
	delete sphere;

	return 0;
}