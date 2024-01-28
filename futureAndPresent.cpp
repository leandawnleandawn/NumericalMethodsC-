#include <iostream>
#include <cmath>

int main() {

	double initialInvestment, presentValue, futureValue;
	double investmentRate = 0.11;
	int noOfYears;

	std::cout << "How many money do you want to invest? ";
	std::cin >> initialInvestment;
	std::cout << "How many years do you want to invest? ";
	std::cin >> noOfYears;

	presentValue = initialInvestment;
	futureValue = 0.0;

	for (int i = 0; i < noOfYears; i++){
		std::cout << futureValue << '\n';
		futureValue += presentValue * pow(1 + investmentRate, i);
		presentValue = futureValue;


	}
	return 0;
}
