#include <iostream>;
#include <string>;
using namespace std;

int main() {
	int a, sum = 0;
	cout << "Enter a: ";
	cin >> a;

	do {
		sum += a;
		a++;
	} while (1 <= a && a <= 20);

	cout << "Sum: " << sum << endl;

	system("pause");
	return 0;
}