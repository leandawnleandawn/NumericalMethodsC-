#include <iostream>
#include <cmath>
#define G 9.807
#define C 0.22


int main(){

	int input, iterations, deltat;
	double velocity, velocity1, mass;

	std::cout << "Time of Function: ";
	std::cin >> input;

	iterations = 10;
	velocity = 0.0;
	mass = 12.5;
	deltat = 1;

	for (int i = 0; i < iterations; i++){
		std::cout << velocity << '\n';
		velocity1 += deltat*(G - (C*pow(input, 2.0))/mass);
		velocity = velocity1;
	}

	return 0;
}
