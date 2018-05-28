#include <fstream>

int main() {

	std::ofstream fout;

	fout.open ("hello_world.ppm", std::ofstream::out | std::ofstream::app);

	int nx = 200;
	int ny = 100;

	fout << "P3\n" << nx << " " << ny << "\n255\n";

	for (int j = ny - 1; j >= 0; j--) {
		for (int i = 0; i < nx; i++) {
			float r = 0.2;
			float g = float(i) / float(nx);
			float b = float(j) / float(ny);

			int ir = int(255.99*r);
			int ig = int(255.99*g);
			int ib = int(255.99*b);


			fout << ir << " " << ig << " " << ib << "\n";
		}
	}

	fout.close();

	return 0;
}