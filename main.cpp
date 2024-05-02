#include <iostream>;
#include <string>;
using namespace std;

int main() {
	int firstNumber, secondNumber, distance, finallyNumber;
	cout << "Enter the first number: ";
	cin >> firstNumber;
	cout << "Enter the second number: ";
	cin >> secondNumber;

	if (firstNumber > secondNumber) {
		distance = firstNumber;
		firstNumber = secondNumber;
		secondNumber = distance;
	}

	cout << "All numbers from the function: ";
	finallyNumber = firstNumber;
	while (finallyNumber <= secondNumber) {
		cout << finallyNumber << " ";
		finallyNumber++;
	}

	system("pause");
	return 0;
}