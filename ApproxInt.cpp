#include <iostream>
#include <cmath>

double f(int x);
int main(){

	int n = 1000;
	double a = 0;
	double b = 2;
	double del_x = (b-a)/n;
	double result, midpoint;
	double x_i = a;
	double x_i1 = 0;
	while(x_i < b){
		x_i1 = x_i + del_x;

		midpoint = (x_i + x_i1)/2;

		result += pow(midpoint, 2)*del_x;
		std::cout << result << '\n';
		x_i = x_i1;

	}

}
