/*The program returns 1 if nth bit is set to 1 else 0*/

#include <iostream>
using namespace std;

int Find_PowerOfTwo(int number){
	int value = 1;
	while(number){
		value = value << 1;
		number--;
	}
	return value;
}

/*If we want to check 1st bit then we dont need power of 0. If we have to check 2nd bit
then power of 1, therefore -1 from the nth bit*/
int Bit_is_Set(int number, int k){
	return bool(number & Find_PowerOfTwo(k-1));
}

int main(){
	int number, bit;
	cout << "Enter the number : ";
	cin >> number;
	cout << "Enter the nth bit : ";
	cin >> bit;
	cout << Bit_is_Set(number, bit) << "\n";
	return 0;
}
