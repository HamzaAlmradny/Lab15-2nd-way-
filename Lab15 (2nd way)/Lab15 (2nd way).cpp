#include <iostream>
using namespace std;

int main() {

	int num1, num2, sum;

	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	sum = num1 + num2;
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	cout << "The first number became: " << num1 << "\n";
	cout << "The second number became: " << num2 << "\n";





























	return 0;
}