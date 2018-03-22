#include <iostream>
#include <string>

using namespace std;

bool PowerOfTwo(int number){
	 return number && !(number & (number -1));
}


int main(){
	cout << "Enter the number to check whether it is of powers of two ";
	int number;
	cin >> number;
	if (PowerOfTwo(number))
		cout << "True\n";
	else
		cout << "False\n";
}
