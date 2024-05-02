#include <iostream>;
#include <string>;
using namespace std;

int main() {

    int firstNumber, secondNumber;

    cout << "Enter the start of the range: ";
    cin >> firstNumber;
    cout << "Enter the end of the range: ";
    cin >> secondNumber;

    if (firstNumber > secondNumber) {
        int temp = firstNumber;
        firstNumber = secondNumber;
        secondNumber = temp;
    }

    int sum = 0;
    int current = firstNumber;

    while (current <= secondNumber) {
        sum += current;
        current++;
    }

	cout << "The sum of the numbers between " << firstNumber << " and " << secondNumber << " is " << sum << endl;

	system("pause");
	return 0;
}