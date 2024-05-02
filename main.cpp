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
	cout << "" << endl;

	cout << "Even numbers in the range: ";
	finallyNumber = firstNumber;
	while (finallyNumber <= secondNumber) {
		if (finallyNumber % 2 == 0) {
			cout << finallyNumber << " ";
		}
		finallyNumber++;
	}
	cout << "" << endl;

	cout << "Odd numbers in the range: ";
	finallyNumber = firstNumber;
	while (finallyNumber <= secondNumber) {
		if (finallyNumber % 2 != 0) {
			cout << finallyNumber << " ";
		}
		finallyNumber++;
	}
	cout << "" << endl;

	cout << "Numbers divisible by seven: " << endl;
	finallyNumber = firstNumber;
	while (finallyNumber <= secondNumber) {
		if (finallyNumber % 7 == 0) {
			cout << finallyNumber << " ";
		}
		finallyNumber++;
	}
	cout << "" << endl;

	system("pause");
	return 0;
}