#include <iostream>;
#include <string>;
using namespace std;

int main() {
	int a, i, sum=0;
	cout << "Enter a number: ";
	cin >> a;

	if (a <= 500) {
		for (i = a; i <= 500; i++) {
			sum += i;
		}
		cout << "Sum of integers from " << a << " to 500 " << sum << endl;
	}
	else {
		cout << "The entered number a is greater than 500. Please enter a number less than or equal to 500" << endl;
	}

	system("pause");
	return 0;
}