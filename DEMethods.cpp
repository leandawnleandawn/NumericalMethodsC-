#include <iostream>
#include <cmath>

int main() {
	
	double x_k = 0.0;
	double y_k = 1.0;

	double x_k1, y_k1, result;
	double step_size, upper_bound, lower_bound;
	upper_bound = 1.0;
	lower_bound = 0.0;
	step_size = 0.05;

	for (double i = lower_bound; i < upper_bound; i += step_size){
		x_k1 = i;
		y_k1 = ((x_k + y_k) * (x_k1 - x_k)) + y_k;
		std::cout << y_k << '\n';
		x_k = x_k1;
		y_k = y_k1;
	}

	return 0;
}
