#include <iostream>;
#include <string>;
using namespace std;

int main() {
	int number, sum = 0;
	do {
		cout << "Enter a number: ";
		cin >> number;
		sum += number;
	} while (number != 0);

	cout << "The sum is: " << sum << endl;

	system("pause");
	return 0;
}