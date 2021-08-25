#include <iostream>
using namespace std;

int main() {
	int num1;
	int num2;
	cout << "Number 1: ";
	cin >> num1;
	cout << "Number 2: ";
	cin >> num2;

	int sum = num1 + num2;
	if(sum == 1979) {
		cout << "WOW YOU ADDED TO 1979!!!" << endl;
	}
	else {
		cout << num1 << " + " << num2 << " = " << sum << endl;
	}

	return 0;
}
