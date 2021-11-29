#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	const int ARR = 4;
	const int SIZE = 4;

	int arr[ARR][SIZE] = {
		{1, 1, 0, 0},
		{1, 0, 1, 0},
		{0, 1, 0, 1},
		{0, 0, 1, 1}
	};

	for (int i = 0; i < ARR; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (arr[i][j] == 1) {
				cout << "# ";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl << endl;
	}
		int _; cin >> _;
		return 0;
}