#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "\n\t\t\t\t\t\t ����������\n" << endl << endl;
	cout << "[1] ������� ����\n" << endl;
	cout << "[2] ���������� ����\n" << endl;
	cout << "[3] �����\n" << endl << endl << endl;
	cout << "[+] ������� �����: ";
	int value;
	cin >> value;

	switch (value) {
	case 1:
		cout << "[1]����������" << endl;
		cout << "[2]���������� �" << endl;
		cout << "[3]������" << endl;
		cout << "[4]������ �����" << endl;
		cout << "[5]�������" << endl;
		cout << "[6]���������" << endl;
		cout << "[7]������" << endl;
		cout << "[8]������� ��" << endl;
		cout << "[9]���������" << endl;
		cout << "[10]��������� ��" << endl;
		cout << "[11]�����" << endl;
		cout << "[12]����� �����" << endl;
		cout << "[13]����" << endl;
		cout << "[14]���" << endl;
		cout << "[15]�������" << endl << endl;
		cout << "[-] �������� �����:" << endl;


		int �������;
		cin >> �������;

		switch (�������) {
		case 1:
			cout << "[1]����������    ->     Absolute" << endl;
			break;

		case 2:    
			cout << "[2]���������� �    ->     And" << endl;
			break;

		case 3:
			cout << "[3]������    ->     Array" << endl;
			break;
			
		case 4:
			cout << "[4]������ �����    ->     Begin" << endl;
			break;

		case 5:
			cout << "[5]�������    ->     Case" << endl;
			break;

		case 6:
			cout << "[6]���������    ->     Const" << endl;
			break;

		case 7:
			cout << "[7]������    ->     Obgect" << endl;
			break;

		case 8:
			cout << "[8]������� ��    ->     Go to" << endl;
			break;

		case 9:
			cout << "[9]���������    ->     Do" << endl;
			break;

		case 10:
			cout << "[10]��������� ��    ->     Downto" << endl;
			break;
			
		case 11:
			cout << "[11]�����    ->     Else" << endl;
			break;

		case 12:
			cout << "[12]����� �����    ->     End" << endl;
			break;

		case 13:    
			cout << "[13]����     ->     File" << endl;
			break;

		case 14:
			cout << "[14]���     ->     For" << endl;
			break;

		case 15:
			cout << "[15]�������     ->     Function" << endl;
			break;

		default:
			cout << "�������������� ���� �Ш��??!?!?!?!?!?" << endl;
			break;
		}
		break;

	case 2:
		cout << "[1]Absolute" << endl;
		cout << "[2]And" << endl;
		cout << "[3]Array" << endl;
		cout << "[4]Begin" << endl;
		cout << "[5]Case" << endl;
		cout << "[6]Const" << endl;
		cout << "[7]Obgect" << endl;
		cout << "[8]Go to" << endl;
		cout << "[9]Do" << endl;
		cout << "[10]Downto" << endl;
		cout << "[11]Else" << endl;
		cout << "[12]End" << endl;
		cout << "[13]File" << endl;
		cout << "[14]For" << endl;
		cout << "[15]Function" << endl << endl;
		cout << "[-] �������� ��������: " << endl;

		int translate;
		cin >> translate;

		switch (translate) {
		case 1:
			cout << "[1]Absolute     ->     ���������� " << endl;
			break;

		case 2:
			cout << "[2]And     ->     ���������� � " << endl;
			break;

		case 3:
			cout << "[3]Array     ->     ������ " << endl;
			break;

		case 4:
			cout << "[4]Begin     ->     ������ ����� " << endl;
			break;

		case 5:
			cout << "[5]Case     ->     ������� " << endl;
			break;

		case 6:
			cout << "[6]Const     ->     ��������� " << endl;
			break;

		case 7:
			cout << "[7]Obgect     ->     ���������� � " << endl;
			break;

		case 8:
			cout << "[8]Go to     ->     ���������� � " << endl;
			break;

		case 9:
			cout << "[9]Do     ->     ���������� � " << endl;
			break;

		case 10:
			cout << "[10]Downto     ->     ���������� � " << endl;
			break;

		case 11:
			cout << "[11]Else     ->     ���������� � " << endl;
			break;

		case 12:
			cout << "[12]End     ->     ���������� � " << endl;
			break;

		case 13:
			cout << "[13]File     ->     ���������� � " << endl;
			break;

		case 14:
			cout << "[14]For     ->     ���������� � " << endl;
			break;

		case 15:
			cout << "[15]Function     ->     ���������� � " << endl;
			break;
		default:
			cout << "�������������� ���� �Ш��??!?!?!?!?!?" << endl;
			break;
		}
		break;


	case 3:
		system("cls");
		break;

	default:
		cout << "������� :|" << endl;
		break;




	}

	int x; cin >> x;
}