#include <iostream>
#include <cmath>
#include <iomanip>


double factorial(int iterations);

int main() {

	int iterations;

	long double input[] = {0, 30, 45, 60, 90};
	long double realOutput[] = {0,-0.9880316241,0.8509035245,-0.3048106211,0.8939966636};
	long double seriesApproxOutput[5];
	std::cout << std::fixed << std::setprecision(3);
	std::cout << "How many Iterations must not be less than 0? ";
	std::cin >> iterations;

	for (int k = 0; k < 5; k++){
		std::cout << "@ " << input[k] << '\n';
		std::cout << "Iterations" << std::setw(10) << "Output"<< '\n';
		long double output = 0.0;
		for(int i = 1, j = 0; j < iterations; i += 2, j++){
			if(j % 2 == 0){
			output += pow(input[k], i) / factorial(i);
			}else{
			output -= pow(input[k], i) / factorial(i);
			}
			std::cout << j << std::setw(10) << output << '\n';
		}	
		seriesApproxOutput[k] = output;
	}
	std::cout << "Finished Approximation.. Loading the following percentage errors." << '\n';

	for (int a = 0; a < 5; a++){
		
		std::cout << "Percentage Error: " << std::setw(10) << ((realOutput[a] - seriesApproxOutput[a]/seriesApproxOutput[a])*100)<< '\n';

	}
	return 0;
}


double factorial(int iterations){
	int index = iterations;
	double output = 1.0;

	while (index <= iterations){
		if (index == 1){
			break;
		}
		output *= index;
		index--;
	}
	return output;
}
