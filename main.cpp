#include <iostream>;
#include <string>;
using namespace std;

int main() {
	int k, i = 1;
	cout << "Enter the number: ";
	cin >> k;

	cout << "Multiplication table for " << k << endl;

	while (i <= 10) {
		cout << k << " * " << i << " = " << (k * i) << endl;
		i++;
	}
	system("pause");
	return 0;
}