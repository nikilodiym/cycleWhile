#include <iostream>;
#include <string>;
using namespace std;

int main() {
	int x, y, i=1;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	while (y > 0) {
		i = i * x;
		y--;
	}
	cout << "Result: " << i << endl;
	system("pause");
	return 0;
}