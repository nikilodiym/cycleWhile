#include <iostream>;
#include <string>;
using namespace std;

int main() {
	int number;
	int i = 0;
	cout << "Enter a number: ";
	cin >> number;

	while (i < number) {
		cout << i+1 << "" << endl;
		i++;
	}

	system("pause");
	return 0;
}