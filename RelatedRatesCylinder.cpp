#include <iostream>
#include <cmath>

int main() {

	const double Q = 450.0;
	const double A = 1250.0;
	const double stepsize = 0.5;

	double y_0 = 0.0;
	double y_1 = 0.0;

	for (double t = 0; t <= 10; t += stepsize){

		y_1 += (stepsize*(3*(Q/A)*pow(sin(t), 2.0))) + y_0;
		std::cout << y_1 << '\n';
		y_0 = y_1;

	}

	return 0;
}
