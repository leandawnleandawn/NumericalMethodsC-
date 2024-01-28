#include <iostream>
#include <cmath>
#define G_0 9.807

double gravity(double x);
int main(){
	
	const double DISTANCE_INIT= 0.0;
	const double DISTANCE_FINAL = 100000.0;
	const double STEPSIZE = 10000.0;

	double v_x0, v_x1, i_1;

	v_x0 = 1500.0;
	for (int i = DISTANCE_INIT; i <= DISTANCE_FINAL; i += STEPSIZE){
		std::cout << v_x0 << '\n';
		v_x1 = ((STEPSIZE)*(gravity(i)/v_x0)) + v_x0;
		v_x0 = v_x1;

	}
	return 0;
}


double gravity(double x){

	const double R = 6.37e+6;
	return -9.81 * (pow(R, 2)/pow(R+x, 2));

}
