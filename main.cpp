#include <fstream>
#include "vec3.h"

int main() {

	std::ofstream fout;

	fout.open ("hello_world.ppm", std::ofstream::out);

	int nx = 200;
	int ny = 100;

	fout << "P3\n" << nx << " " << ny << "\n255\n";

	for (int j = ny - 1; j >= 0; j--) {
		for (int i = 0; i < nx; i++) {

			vec3 col(0.2, float(i) / float(nx), float(j) / float(ny));

			int ir = int(255.99*col[0]);
			int ig = int(255.99*col[1]);
			int ib = int(255.99*col[2]);


			fout << ir << " " << ig << " " << ib << "\n";
		}
	}

	fout.close();

	return 0;
}