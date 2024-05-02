#include <iostream>;
#include <string>;
using namespace std;

int main() {
	int a = 1, b = 1000, i=1;
	while (a < b) {
		a++;
		i += a;
	}
	double average = static_cast<double>(i + 1) / a;
	cout << "Arithmetic average of numbers from 1 to 1000: " << average << endl;

	system("pause");
	return 0;
}