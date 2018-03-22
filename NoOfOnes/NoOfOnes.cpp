/*The program compares complexity of finding number of Zeroes in a number. 
There are two functions which returns the count and number of loop iterations
in a bitwise vs division method.*/


#include <iostream>
using namespace std;

struct Combine{
	int count;
	int loop_ran;
};

struct Combine Ones_bitwise(int number){
	struct Combine structure;
	structure.count = 0;
	structure.loop_ran = 0;

	while(number){
		structure.loop_ran++;
		number = number & (number-1);
		structure.count ++;
	}
	return structure;
}

struct Combine Ones_division(int number){
	struct Combine structure;
	structure.count = 0;
	structure.loop_ran = 0;

	while(number){
		structure.loop_ran ++;
		structure.count += number%2 ? 1 : 0;
		number = number/2;
	}
	return structure;
}

int main(){
	int number;
	cout << "Enter the number : ";
	cin >> number;
	struct Combine structure;
	structure = Ones_bitwise(number);
	
	cout << "The number of ones are Ones_bitwise " << structure.count << "\n";
	cout << "The number of loop iterations " << structure.loop_ran << "\n";
	
	structure = Ones_division(number);
	cout << "The number of ones are by Ones_division "<< structure.count << "\n";
	cout << "The number of loop iterations " << structure.loop_ran << "\n";
	return 0;
}
