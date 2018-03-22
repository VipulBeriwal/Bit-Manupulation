/*The program returns 1 if nth bit is set to 1 else 0*/

#include <iostream>
using namespace std;

void PrintSet(char *set, int length){
	//Finding the total number of combinations
	int max_combinations = 1 << (length);
	
	for(int number = 0; number < max_combinations; number++){
		cout << "{";
		for(int k_index = 0; k_index < length; k_index++){
			//kth bit check by shifting k-1 times
			int value = (number >> k_index) & 1;
			if (value != 0){
				cout << " " << set[k_index] << " ";
			}
		}
		cout << "}\n";
	}
}


int main(int argc, char **argv){
	if(argc != 2){
		cout << "Usage: ./Combinations <string>\n";
	}

	int length = 0, i = 0;
	//Finding Length
	while( argv[1][i] != '\0'){
		length++;
		i++;
	}
	
	//If length is zero
	if(length == 0){
		cout << "length of string is Zero\n";
		return 0;
	}

	PrintSet(argv[1], length);
	return 0;
}
