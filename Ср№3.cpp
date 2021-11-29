#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	double a, b, number, c;
	c = 0;
	int a_int, b_int;
	cout << "Введите знак: \n"
		"1 - [+]\n"
		"2 - [-]\n"
		"3 - [*]\n"
		"4 - [/]\n"
		"5 - [%]\n\n";

	cin >> number;
	cout << "Введите числа: \n";
	cin >> a;
	cin >> b;
	if (number == 5) {
		a_int = a;
		b_int = b;
	}

	if (number == 1) {
		c = a + b;
		cout << "[+] Результат: " << a << " + " << b << " = " << c << endl;

	}
	else if (number == 2) {
		c = a - b;
		cout << "[-] Результат: " << a << " - " << b << " = " << c << endl;

	}
	else if (number == 3) {
		c = a * b;
		cout << "[*] Результат: " << a << " * " << b << " = " << c << endl;
	}
	else if (number == 4) {
		if (b == 0) {
			cout << "На 0 делить нельзя!\n";
		}
		else {
			c = a / b;
			cout << "[/] Результат: " << a << " / " << b << " = " << c << endl;
		}
	}
	else if (5) {
		c = a_int % b_int;
		cout << "[%] Результат: " << a_int << " % " << b_int << " = " << c << endl;

	}
	else {
		cout << "Ошибка.";
	}
	return 0;
}