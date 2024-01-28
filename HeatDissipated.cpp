#include <iostream>

int main() {

	int divisions = 1000;
	double temp_final = 96000.0;
	double temp_init = 0.0;
	double delta_temp = (temp_final-temp_init) / divisions;
	const double mass_of_air = 314.716;
	const double heat_cap = 0.718;

	double temp_i, temp_i1, midpoint, results;

	temp_i = temp_init;
	
	while (temp_i < temp_final){
	
		temp_i1 = temp_i + delta_temp;
		midpoint = (temp_i + temp_i1) / 2.0;
		results += delta_temp;
		std::cout << mass_of_air*heat_cap*results << '\n';
		temp_i = temp_i1;


	}
	return 0;
}

