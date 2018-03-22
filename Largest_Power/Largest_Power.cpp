#include <iostream>
using namespace std;


void LargestPower(int number){
	int count = 0, value = 1;
	
	while(value <= number){
		value = value << 1;
		count++;
	}
	cout << "The largest power of 2 less than equal to number is : " << count-1 << "\n"; 
}




int main(){
	int number;
	cout << "Enter the number : ";
	cin >> number;

	//CornerCase
	if(number == 0){
		cout << "Undefined\n";
		return 0;
	}

	LargestPower(number);
	return 0;
}
