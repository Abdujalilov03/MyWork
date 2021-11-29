#include <iostream>
#include <windows.h>
using namespace std;

int main();
void game();
void settings();

int size = 3;
bool turn = true;
string map1 = ".";
string x = "x";
string o = "o";

void mapColor() {
	system("cls");
	cout << "�������� ���� ����: " << endl;
	cout << "[1] �����" << endl;
	cout << "[2] �������" << endl;
	cout << "[3] �������" << endl;
	cout << "[4] ����������" << endl;
	cout << "[5] ������" << endl;
	cout << "�������: ";
	int colorm;
	cin >> colorm;
	switch (colorm) {
	case 1:
		map1 = "\x1b[34m.\x1b[0m";
		break;
	case 2:
		map1 = "\x1b[31m.\x1b[0m";
		break;
	case 3:
		map1 = "\x1b[32m.\x1b[0m";
		break;
	case 4:
		map1 = "\x1b[35m.\x1b[0m";
		break;
	case 5:
		map1 = "\x1b[33m.\x1b[0m";
		break;
	default:
		cout << "������ ����� �� ����������";
		Sleep(5000);
		break;
	}
}

void mapSize() {
	system("cls");
	cout << "�������� ������ ����: " << endl;
	cout << "[1] 3x3" << endl;
	cout << "[2] 4x4" << endl;
	cout << "[3] 5x5" << endl;
	cout << "�������: ";
	int mapsize;
	cin >> mapsize;
	switch (mapsize) {
	case 1:
		::size = 3;
		break;
	case 2:
		::size = 4;
		break;
	case 3:
		::size = 5;
		break;
	default:
		cout << "������ ������� �� ����������";
		break;
	}
}

void colorX() {
	system("cls");
	cout << "�������� ���� ��������: " << endl;
	cout << "[1] �������" << endl;
	cout << "[2] ����������" << endl;
	cout << "[3] ������" << endl;
	cout << "[4] �������" << endl;
	cout << "[5] �������" << endl;
	cout << "�������: ";
	int colorx;
	cin >> colorx;
	switch (colorx) {
	case 1:
		x = "\x1b[36mx\x1b[0m";
		break;
	case 2:
		x = "\x1b[35mx\x1b[0m";
		break;
	case 3:
		x = "\x1b[33mx\x1b[0m";
		break;
	case 4:
		x = "\x1b[32mx\x1b[0m";
		break;
	case 5:
		x = "\x1b[31mx\x1b[0m";
		break;
	default:
		cout << "������ ����� �� ����������";
		Sleep(5000);
		break;
	}
}

void colorO() {
	system("cls");
	cout << "�������� ���� ������: " << endl;
	cout << "[1] �������" << endl;
	cout << "[2] �������" << endl;
	cout << "[3] ������" << endl;
	cout << "[4] �����" << endl;
	cout << "[5] ����������" << endl;
	cout << "�������: ";
	int coloro;
	cin >> coloro;
	switch (coloro) {
	case 1:
		o = "\x1b[31mo\x1b[0m";
		break;
	case 2:
		o = "\x1b[32mo\x1b[0m";
		break;
	case 3:
		o = "\x1b[33mo\x1b[0m";
		break;
	case 4:
		o = "\x1b[34mo\x1b[0m";
		break;
	case 5:
		o = "\x1b[35mo\x1b[0m";
		break;
	default:
		cout << "������ ����� �� ����������";
		Sleep(5000);
		break;
	}
}

void settings() {
	system("cls");
	cout << "���������" << endl;
	cout << "[1] ���� ����" << endl;
	cout << "[2] ������ ����" << endl;
	cout << "[3] ���� ��������" << endl;
	cout << "[4] ���� ������" << endl;
	cout << "[5] ��������� � ����" << endl;
	cout << "�������: ";
	int vodset;
	cin >> vodset;
	switch (vodset) {
	case 1:
		mapColor();
		settings();
		break;
	case 2:
		mapSize();
		settings();
		break;
	case 3:
		colorX();
		settings();
		break;
	case 4:
		colorO();
		settings();
		break;
	case 5:
		main();
		break;
	}
}

void game() {
	bool win = true;

	int turn1 = 0;
	if (::size == 3)
	{
		const int v = 3;
		const int h = 3;
		int map[v][h]{ {0,0,0}, {0,0,0}, {0,0,0} };
		system("cls");
		while (win == true)
		{
			cout << "��������-������";
			cout << "\n\n";
			for (int i = 0; i < v; i++)
			{
				cout << "\t\t";
				for (int j = 0; j < h; j++)
				{
					if (map[i][j] == 0)
					{
						cout << map1 << "    ";
					}
					else if (map[i][j] == 1)
					{
						cout << x << "    ";
					}
					else if (map[i][j] == 2)
					{
						cout << o << "    ";
					}
				}
				cout << "\n\n";
			}
			if (turn == true)
			{
				cout << "��� ��������: ";
				turn = false;
			}
			else
			{
				cout << "��� ������: ";
				turn = true;
			}
			cin >> turn1;

			switch (turn1)
			{
			case 1:
				if (map[0][0] != 1 && map[0][0] != 2)
					!turn ? map[0][0] = 1 : map[0][0] = 2;
				else
					turn = !turn;
				break;
			case 2:
				if (map[0][1] != 1 && map[0][1] != 2)
					!turn ? map[0][1] = 1 : map[0][1] = 2;
				else
					turn = !turn;
				break;
			case 3:
				if (map[0][2] != 1 && map[0][2] != 2)
					!turn ? map[0][2] = 1 : map[0][2] = 2;
				else
					turn = !turn;
				break;
			case 4:
				if (map[1][0] != 1 && map[1][0] != 2)
					!turn ? map[1][0] = 1 : map[1][0] = 2;
				else
					turn = !turn;
				break;
			case 5:
				if (map[1][1] != 1 && map[1][1] != 2)
					!turn ? map[1][1] = 1 : map[1][1] = 2;
				else
					turn = !turn;
				break;
			case 6:
				if (map[1][2] != 1 && map[1][2] != 2)
					!turn ? map[1][2] = 1 : map[1][2] = 2;
				else
					turn = !turn;
				break;
			case 7:
				if (map[2][0] != 1 && map[2][0] != 2)
					!turn ? map[2][0] = 1 : map[2][0] = 2;
				else
					turn = !turn;
				break;
			case 8:
				if (map[2][1] != 1 && map[2][1] != 2)
					!turn ? map[2][1] = 1 : map[2][1] = 2;
				else
					turn = !turn;
				break;
			case 9:
				if (map[2][2] != 1 && map[2][2] != 2)
					!turn ? map[2][2] = 1 : map[2][2] = 2;
				else
					turn = !turn;
				break;
			}
			system("cls");
			if (map[0][0] == 1 && map[0][1] == 1 && map[0][2] == 1 || map[0][0] == 2 && map[0][1] == 2 && map[0][2] == 2 ||
				map[1][0] == 1 && map[1][1] == 1 && map[1][2] == 1 || map[1][0] == 2 && map[1][1] == 2 && map[1][2] == 2 ||
				map[2][0] == 1 && map[2][1] == 1 && map[2][2] == 1 || map[2][0] == 2 && map[2][1] == 2 && map[2][2] == 2 ||
				map[0][1] == 1 && map[1][1] == 1 && map[2][1] == 1 || map[0][1] == 2 && map[1][1] == 2 && map[2][1] == 2 ||
				map[0][0] == 1 && map[1][0] == 1 && map[2][0] == 1 || map[0][0] == 2 && map[1][0] == 2 && map[2][0] == 2 ||
				map[0][2] == 1 && map[1][2] == 1 && map[2][2] == 1 || map[0][2] == 2 && map[1][2] == 2 && map[2][2] == 2 ||
				map[0][2] == 1 && map[1][1] == 1 && map[2][0] == 1 || map[0][2] == 2 && map[1][1] == 2 && map[2][0] == 2 ||
				map[0][0] == 1 && map[1][1] == 1 && map[2][2] == 1 || map[0][0] == 2 && map[1][1] == 2 && map[2][2] == 2)
			{
				if (!turn == true) {

					cout << "\x1b[92m������� �������\x1b[0m" << endl;
					win = false;
				}
				else {
					cout << "\x1b[92m������� �����\x1b[0m" << endl;
					win = false;
				}
			}
		}
		Sleep(3000);
		exit(0);
	}
	else if (::size == 4)
	{
		const int v = 4;
		const int h = 4;
		int map[v][h]{ {0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0} };
		system("cls");
		while (win == true)
		{
			cout << "��������-������";
			cout << "\n\n";
			for (int i = 0; i < v; i++)
			{
				cout << "\t\t";
				for (int j = 0; j < h; j++)
				{
					if (map[i][j] == 0)
					{
						cout << map1 << "    ";
					}
					else if (map[i][j] == 1)
					{
						cout << x << "    ";
					}
					else if (map[i][j] == 2)
					{
						cout << o << "    ";
					}
				}
				cout << "\n\n";
			}
			if (turn == true)
			{
				cout << "��� ��������: ";
				turn = false;
			}
			else
			{
				cout << "��� ������: ";
				turn = true;
			}
			cin >> turn1;

			switch (turn1)
			{
			case 1:
				if (map[0][0] != 1 && map[0][0] != 2)
					!turn ? map[0][0] = 1 : map[0][0] = 2;
				else
					turn = !turn;
				break;
			case 2:
				if (map[0][1] != 1 && map[0][1] != 2)
					!turn ? map[0][1] = 1 : map[0][1] = 2;
				else
					turn = !turn;
				break;
			case 3:
				if (map[0][2] != 1 && map[0][2] != 2)
					!turn ? map[0][2] = 1 : map[0][2] = 2;
				else
					turn = !turn;
				break;
			case 4:
				if (map[0][3] != 1 && map[0][3] != 2)
					!turn ? map[0][3] = 1 : map[0][3] = 2;
				else
					turn = !turn;
				break;
			case 5:
				if (map[1][0] != 1 && map[1][0] != 2)
					!turn ? map[1][0] = 1 : map[1][0] = 2;
				else
					turn = !turn;
				break;
			case 6:
				if (map[1][1] != 1 && map[1][1] != 2)
					!turn ? map[1][1] = 1 : map[1][1] = 2;
				else
					turn = !turn;
				break;
			case 7:
				if (map[1][2] != 1 && map[1][2] != 2)
					!turn ? map[1][2] = 1 : map[1][2] = 2;
				else
					turn = !turn;
				break;
			case 8:
				if (map[1][3] != 1 && map[1][3] != 2)
					!turn ? map[1][3] = 1 : map[1][3] = 2;
				else
					turn = !turn;
				break;
			case 9:
				if (map[2][0] != 1 && map[2][0] != 2)
					!turn ? map[2][0] = 1 : map[2][0] = 2;
				else
					turn = !turn;
				break;
			case 10:
				if (map[2][1] != 1 && map[2][1] != 2)
					!turn ? map[2][1] = 1 : map[2][1] = 2;
				else
					turn = !turn;
				break;
			case 11:
				if (map[2][2] != 1 && map[2][2] != 2)
					!turn ? map[2][2] = 1 : map[2][2] = 2;
				else
					turn = !turn;
				break;
			case 12:
				if (map[2][3] != 1 && map[2][3] != 2)
					!turn ? map[2][3] = 1 : map[2][3] = 2;
				else
					turn = !turn;
				break;
			case 13:
				if (map[3][0] != 1 && map[3][0] != 2)
					!turn ? map[3][0] = 1 : map[3][0] = 2;
				else
					turn = !turn;
				break;
			case 14:
				if (map[3][1] != 1 && map[3][1] != 2)
					!turn ? map[3][1] = 1 : map[3][1] = 2;
				else
					turn = !turn;
				break;
			case 15:
				if (map[3][2] != 1 && map[3][2] != 2)
					!turn ? map[3][2] = 1 : map[3][2] = 2;
				else
					turn = !turn;
				break;
			case 16:
				if (map[3][3] != 1 && map[3][3] != 2)
					!turn ? map[3][3] = 1 : map[3][3] = 2;
				else
					turn = !turn;
				break;
			}
			system("cls");
			if (
				map[0][0] == 1 && map[0][1] == 1 && map[0][2] == 1 && map[0][3] == 1 ||
				map[1][0] == 1 && map[1][1] == 1 && map[1][2] == 1 && map[1][3] == 1 ||
				map[2][0] == 1 && map[2][1] == 1 && map[2][2] == 1 && map[2][3] == 1 ||
				map[3][0] == 1 && map[3][1] == 1 && map[3][2] == 1 && map[3][3] == 1 ||
				map[0][0] == 1 && map[1][0] == 1 && map[2][0] == 1 && map[3][0] == 1 ||
				map[0][1] == 1 && map[1][1] == 1 && map[2][1] == 1 && map[3][1] == 1 ||
				map[0][2] == 1 && map[1][2] == 1 && map[2][2] == 1 && map[3][2] == 1 ||
				map[0][3] == 1 && map[1][3] == 1 && map[2][3] == 1 && map[3][3] == 1 ||
				map[0][0] == 1 && map[1][1] == 1 && map[2][2] == 1 && map[3][3] == 1 ||
				map[0][3] == 1 && map[1][2] == 1 && map[1][1] == 1 && map[1][0] == 1
				)
			{
				if (!turn == true) {

					cout << "\x1b[92m������� �������\x1b[0m" << endl;
					win = false;
				}
				else {
					cout << "\x1b[92m������� �����\x1b[0m" << endl;
					win = false;
				}
			}
			else if (
				map[0][0] == 2 && map[0][1] == 2 && map[0][2] == 2 && map[0][3] == 2 ||
				map[1][0] == 2 && map[1][1] == 2 && map[1][2] == 2 && map[1][3] == 2 ||
				map[2][0] == 2 && map[2][1] == 2 && map[2][2] == 2 && map[2][3] == 2 ||
				map[3][0] == 2 && map[3][1] == 2 && map[3][2] == 2 && map[3][3] == 2 ||
				map[0][0] == 2 && map[1][0] == 2 && map[2][0] == 2 && map[3][0] == 2 ||
				map[0][1] == 2 && map[1][1] == 2 && map[2][1] == 2 && map[3][1] == 2 ||
				map[0][2] == 2 && map[1][2] == 2 && map[2][2] == 2 && map[3][2] == 2 ||
				map[0][3] == 2 && map[1][3] == 2 && map[2][3] == 2 && map[3][3] == 2 ||
				map[0][0] == 2 && map[1][1] == 2 && map[2][2] == 2 && map[3][3] == 2 ||
				map[0][3] == 2 && map[1][2] == 2 && map[1][1] == 2 && map[1][0] == 2
				)
			{
				if (!turn == true) {

					cout << "\x1b[92m������� �������\x1b[0m" << endl;
					win = false;
				}
				else {
					cout << "\x1b[92m������� �����\x1b[0m" << endl;
					win = false;
				}
			}
		}
		Sleep(3000);
		exit(0);
	}
	else if (::size == 5)
	{
		const int v = 5;
		const int h = 5;
		int map[v][h]{ {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0} };
		system("cls");
		while (win == true)
		{
			cout << "��������-������";
			cout << "\n\n";
			for (int i = 0; i < v; i++)
			{
				cout << "\t\t";
				for (int j = 0; j < h; j++)
				{
					if (map[i][j] == 0)
					{
						cout << map1 << "    ";
					}
					else if (map[i][j] == 1)
					{
						cout << x << "    ";
					}
					else if (map[i][j] == 2)
					{
						cout << o << "    ";
					}
				}
				cout << "\n\n";
			}
			if (turn == true)
			{
				cout << "��� ��������: ";
				turn = false;
			}
			else
			{
				cout << "��� ������: ";
				turn = true;
			}
			cin >> turn1;

			switch (turn1)
			{
			case 1:
				if (map[0][0] != 1 && map[0][0] != 2)
					!turn ? map[0][0] = 1 : map[0][0] = 2;
				else
					turn = !turn;
				break;
			case 2:
				if (map[0][1] != 1 && map[0][1] != 2)
					!turn ? map[0][1] = 1 : map[0][1] = 2;
				else
					turn = !turn;
				break;
			case 3:
				if (map[0][2] != 1 && map[0][2] != 2)
					!turn ? map[0][2] = 1 : map[0][2] = 2;
				else
					turn = !turn;
				break;
			case 4:
				if (map[0][3] != 1 && map[0][3] != 2)
					!turn ? map[0][3] = 1 : map[0][3] = 2;
				else
					turn = !turn;
				break;
			case 5:
				if (map[0][4] != 1 && map[0][4] != 2)
					!turn ? map[0][4] = 1 : map[0][4] = 2;
				else
					turn = !turn;
				break;
			case 6:
				if (map[1][0] != 1 && map[1][0] != 2)
					!turn ? map[1][0] = 1 : map[1][0] = 2;
				else
					turn = !turn;
				break;
			case 7:
				if (map[1][1] != 1 && map[1][1] != 2)
					!turn ? map[1][1] = 1 : map[1][1] = 2;
				else
					turn = !turn;
				break;
			case 8:
				if (map[1][2] != 1 && map[1][2] != 2)
					!turn ? map[1][2] = 1 : map[1][2] = 2;
				else
					turn = !turn;
				break;
			case 9:
				if (map[1][3] != 1 && map[1][3] != 2)
					!turn ? map[1][3] = 1 : map[1][3] = 2;
				else
					turn = !turn;
				break;
			case 10:
				if (map[1][4] != 1 && map[1][4] != 2)
					!turn ? map[1][4] = 1 : map[1][4] = 2;
				else
					turn = !turn;
				break;
			case 11:
				if (map[2][0] != 1 && map[2][0] != 2)
					!turn ? map[2][0] = 1 : map[2][0] = 2;
				else
					turn = !turn;
				break;
			case 12:
				if (map[2][1] != 1 && map[2][1] != 2)
					!turn ? map[2][1] = 1 : map[2][1] = 2;
				else
					turn = !turn;
				break;
			case 13:
				if (map[2][2] != 1 && map[2][2] != 2)
					!turn ? map[2][2] = 1 : map[2][2] = 2;
				else
					turn = !turn;
				break;
			case 14:
				if (map[2][3] != 1 && map[2][3] != 2)
					!turn ? map[2][3] = 1 : map[2][3] = 2;
				else
					turn = !turn;
				break;
			case 15:
				if (map[2][4] != 1 && map[2][4] != 2)
					!turn ? map[2][4] = 1 : map[2][4] = 2;
				else
					turn = !turn;
				break;
			case 16:
				if (map[3][0] != 1 && map[3][0] != 2)
					!turn ? map[3][0] = 1 : map[3][0] = 2;
				else
					turn = !turn;
				break;
			case 17:
				if (map[3][1] != 1 && map[3][1] != 2)
					!turn ? map[3][1] = 1 : map[3][1] = 2;
				else
					turn = !turn;
				break;
			case 18:
				if (map[3][2] != 1 && map[3][2] != 2)
					!turn ? map[3][2] = 1 : map[3][2] = 2;
				else
					turn = !turn;
				break;
			case 19:
				if (map[3][3] != 1 && map[3][3] != 2)
					!turn ? map[3][3] = 1 : map[3][3] = 2;
				else
					turn = !turn;
				break;
			case 20:
				if (map[3][4] != 1 && map[3][4] != 2)
					!turn ? map[3][4] = 1 : map[3][4] = 2;
				else
					turn = !turn;
				break;
			case 21:
				if (map[4][0] != 1 && map[4][0] != 2)
					!turn ? map[4][0] = 1 : map[4][0] = 2;
				else
					turn = !turn;
				break;
			case 22:
				if (map[4][1] != 1 && map[4][1] != 2)
					!turn ? map[4][1] = 1 : map[4][1] = 2;
				else
					turn = !turn;
				break;
			case 23:
				if (map[4][2] != 1 && map[4][2] != 2)
					!turn ? map[4][2] = 1 : map[4][2] = 2;
				else
					turn = !turn;
				break;
			case 24:
				if (map[4][3] != 1 && map[4][3] != 2)
					!turn ? map[4][3] = 1 : map[4][3] = 2;
				else
					turn = !turn;
				break;
			case 25:
				if (map[4][4] != 1 && map[4][4] != 2)
					!turn ? map[4][4] = 1 : map[4][4] = 2;
				else
					turn = !turn;
				break;
			}
			system("cls");
			if (
				map[0][0] == 1 && map[0][1] == 1 && map[0][2] == 1 && map[0][3] == 1 && map[0][4] == 1 ||
				map[1][0] == 1 && map[1][1] == 1 && map[1][2] == 1 && map[1][3] == 1 && map[1][4] == 1 ||
				map[2][0] == 1 && map[2][1] == 1 && map[2][2] == 1 && map[2][3] == 1 && map[2][4] == 1 ||
				map[3][0] == 1 && map[3][1] == 1 && map[3][2] == 1 && map[3][3] == 1 && map[3][4] == 1 ||
				map[4][0] == 1 && map[4][1] == 1 && map[4][2] == 1 && map[4][3] == 1 && map[4][4] == 1 ||
				map[0][0] == 1 && map[1][0] == 1 && map[2][0] == 1 && map[3][0] == 1 && map[4][0] == 1 ||
				map[0][1] == 1 && map[1][1] == 1 && map[2][1] == 1 && map[3][1] == 1 && map[4][1] == 1 ||
				map[0][2] == 1 && map[1][2] == 1 && map[2][2] == 1 && map[3][2] == 1 && map[4][2] == 1 ||
				map[0][3] == 1 && map[1][3] == 1 && map[2][3] == 1 && map[3][3] == 1 && map[4][3] == 1 ||
				map[0][4] == 1 && map[1][4] == 1 && map[2][4] == 1 && map[3][4] == 1 && map[4][4] == 1 ||
				map[0][0] == 1 && map[1][1] == 1 && map[2][2] == 1 && map[3][3] == 1 && map[4][4] == 1 ||
				map[0][4] == 1 && map[1][3] == 1 && map[2][2] == 1 && map[3][1] == 1 && map[4][0] == 1
				)
			{
				if (!turn == true) {

					cout << "\x1b[92m������� �������\x1b[0m" << endl;
					win = false;
				}
				else {
					cout << "\x1b[92m������� �����\x1b[0m" << endl;
					win = false;
				}
			}
			else if
				(
					map[0][0] == 2 && map[0][1] == 2 && map[0][2] == 2 && map[0][3] == 2 && map[0][4] == 2 ||
					map[1][0] == 2 && map[1][1] == 2 && map[1][2] == 2 && map[1][3] == 2 && map[1][4] == 2 ||
					map[2][0] == 2 && map[2][1] == 2 && map[2][2] == 2 && map[2][3] == 2 && map[2][4] == 2 ||
					map[3][0] == 2 && map[3][1] == 2 && map[3][2] == 2 && map[3][3] == 2 && map[3][4] == 2 ||
					map[4][0] == 2 && map[4][1] == 2 && map[4][2] == 2 && map[4][3] == 2 && map[4][4] == 2 ||
					map[0][0] == 2 && map[1][0] == 2 && map[2][0] == 2 && map[3][0] == 2 && map[4][0] == 2 ||
					map[0][1] == 2 && map[1][1] == 2 && map[2][1] == 2 && map[3][1] == 2 && map[4][1] == 2 ||
					map[0][2] == 2 && map[1][2] == 2 && map[2][2] == 2 && map[3][2] == 2 && map[4][2] == 2 ||
					map[0][3] == 2 && map[1][3] == 2 && map[2][3] == 2 && map[3][3] == 2 && map[4][3] == 2 ||
					map[0][4] == 2 && map[1][4] == 2 && map[2][4] == 2 && map[3][4] == 2 && map[4][4] == 2 ||
					map[0][0] == 2 && map[1][1] == 2 && map[2][2] == 2 && map[3][3] == 2 && map[4][4] == 2 ||
					map[0][4] == 2 && map[1][3] == 2 && map[2][2] == 2 && map[3][1] == 2 && map[4][0] == 2
					)
			{
				if (!turn == true) {

					cout << "\x1b[92m������� �������\x1b[0m" << endl;
					win = false;
				}
				else {
					cout << "\x1b[92m������� �����\x1b[0m" << endl;
					win = false;
				}
			}
		}
		Sleep(3000);
		exit(0);
	}
}

int main() {
	setlocale(0, "");

	system("cls");
	cout << "���������: ��������-������" << endl;
	cout << "[1] ������ ����" << endl;
	cout << "[2] ���������" << endl;
	cout << "[3] �����" << endl;
	cout << "�������: ";
	int vodm;
	cin >> vodm;
	switch (vodm) {
	case 1:
		game();
		break;
	case 2:
		settings();
		break;
	case 3:
		exit(0);
		break;
	}


	return 0;
}