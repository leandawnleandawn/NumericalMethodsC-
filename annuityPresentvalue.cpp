#include <iostream>
#include <cmath>

int main() {

	double annuity, presentValue, noOfYears, interestRate;

	interestRate = 0.066;

	std::cout << "Present Value At the Moment ";
	std::cin >> presentValue;
	std::cout << "How many Years ? ";
	std::cin >> noOfYears;


	annuity = 0.0;

	for (int i = 0; i < noOfYears; i++){
		if(i == 0){
			annuity = presentValue;
			std::cout << annuity << '\n';
			continue;
		}

		annuity = presentValue * ((interestRate* pow(1+interestRate, i))/(pow(1+interestRate, i) - 1));
		std::cout << annuity << '\n';


	}
	return 0;
}
