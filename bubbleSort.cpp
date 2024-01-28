#include <iostream>
#include <random>

void printResults(int input[], int length);
int main(){


	int inputarray[] = {18, 4, 99, 0, 6};
	const int length = sizeof(inputarray) / sizeof(inputarray[0]);
	int index_input = 0;
	int swapping_index_input = 0;
	bool swap;
	int placeholder = 0;

	std::cout << "Input Array" << '\n';
  printResults(inputarray, length);
	std::cout << "Length " << length << '\n';

for (int i = 0; i < 5; i++){
	std::cout << "Iteration " << i << '\n';
	index_input = 0;
		while(index_input < length){
		swap = false;

			while (inputarray[index_input] > inputarray[index_input + 1]){
				if(index_input + 1 == 5){
					break;
				}
				swapping_index_input = index_input;
				placeholder = inputarray[swapping_index_input];
				inputarray[swapping_index_input] = inputarray[swapping_index_input + 1];
				inputarray[swapping_index_input + 1] = placeholder;
				printResults(inputarray, length);
				std::cout << '\n';
				swap = true;
				swapping_index_input++;
			}

		index_input++;
	}
}
	
printResults(inputarray, length);


	return 0;
}

void printResults(int input[], int length){
	for(int i = 0; i < length; i++){
		
		std::cout << input[i] << " ";
	}
}