// Documentation Section

/*
File Name : Lab 15 (2nd way)
Author : Hamza Alsayed Almradny 
Version : V.1
Purpose : Program that swaps 2 numbers in 2 different ways 
Date :21/7/2025
*/




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