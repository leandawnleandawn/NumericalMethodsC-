#include <iostream>
#include <cmath>
#define PI 3.141

double diffEq(double& y, double& t);
int main() {

	const double Y_0 = 0.8;
	const double T_I = 0;
	const double T_F = 10;

	double yt,yt1;

	yt = Y_0;
	for (double i = T_I; i < T_F; i += 0.5){
		yt1 += (diffEq(yt, i) * 0.5) + yt;
		std::cout << yt1 << '\n';
		yt = yt1;
	}

	return 0;
}


double diffEq(double& y, double& t){
	const double R_TOP = 2.5;
	const double Y_TOP = 4;
	const double Y_OUT = 1;
	
	double Q_in, Q_out;

	Q_in = 3 * pow(sin(t), 2) / (PI * pow(R_TOP, 2)); 
	if (y > Y_OUT){
		Q_out = (3 * pow(y - Y_OUT, 1.5))/ (PI * pow(R_TOP, 2));
	}else{
		Q_out = 0;	
	}

	return Q_in - Q_out;

}
