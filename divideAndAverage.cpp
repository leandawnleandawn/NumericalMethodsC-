#include <iostream>
#include <cmath>

int main(){

	double input, output;

	int iterations = 100;

	double x_0, x_1;

	std::cout << "Output";
	std::cin >> input;
	x_0 = 1e-9;
	x_1 = 0.0;

	for (int i = 0; i < iterations; i++){

		x_1 = (x_0 + (input/x_0)) / 2;
		x_0 = x_1;

		std::cout << x_1 << '\n';

	}

	return 0;
}

