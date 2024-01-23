#include <iostream>

int main() {
	
	int divisions = 1000;
	const double mass_of_air = 314.716;
	const double heat_capacity = 0.718;
	
	double upper_bound = 96000;
	double lower_bound = 0;
	int delta_T;
	double heat_output_1_t, heat_output_t;

	delta_T = (upper_bound - lower_bound) / divisions;

	int i_1 = 0;

	for (lower_bound = 0; lower_bound < upper_bound; lower_bound += delta_T){	
		
		i_1 = (i_1 + lower_bound)/2; 
	}


	return 0;
}

