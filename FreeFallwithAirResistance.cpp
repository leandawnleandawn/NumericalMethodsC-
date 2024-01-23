#include <iostream>
#include <cmath>
#define G 9.80665
int main (){

	long double mass, velocityt, velocityt_1;
	const long double AIRCONST = 12.5;
	
	mass = 68.1;
	velocityt = 0;

	for (int i = 0; i < 300; i++){
		std::cout << "Time: " << i << "********" << "Velocity: " << velocityt_1 << std::endl;
		velocityt_1 = (((mass*G) - (AIRCONST*velocityt))/mass) + velocityt;
		velocityt = velocityt_1;
	}
	
	return 0;
}