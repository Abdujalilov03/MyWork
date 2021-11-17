#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "\n\t\t\t\t\t\t Переводчик\n" << endl << endl;
	cout << "[1] Русский язык\n" << endl;
	cout << "[2] Английский язык\n" << endl;
	cout << "[3] Выйти\n" << endl << endl << endl;
	cout << "[+] Введите число: ";
	int value;
	cin >> value;

	switch (value) {
	case 1:
		cout << "[1]Абсолютный" << endl;
		cout << "[2]Логическое И" << endl;
		cout << "[3]Массив" << endl;
		cout << "[4]Начало блока" << endl;
		cout << "[5]Вариант" << endl;
		cout << "[6]Константа" << endl;
		cout << "[7]Обьект" << endl;
		cout << "[8]Переход на" << endl;
		cout << "[9]Выполнять" << endl;
		cout << "[10]Уменьшить до" << endl;
		cout << "[11]Иначе" << endl;
		cout << "[12]Конец блока" << endl;
		cout << "[13]Файл" << endl;
		cout << "[14]Для" << endl;
		cout << "[15]Функция" << endl << endl;
		cout << "[-] Выберите число:" << endl;


		int перевод;
		cin >> перевод;

		switch (перевод) {
		case 1:
			cout << "[1]Абсолютный    ->     Absolute" << endl;
			break;

		case 2:    
			cout << "[2]Логическое И    ->     And" << endl;
			break;

		case 3:
			cout << "[3]Массив    ->     Array" << endl;
			break;
			
		case 4:
			cout << "[4]Начало блока    ->     Begin" << endl;
			break;

		case 5:
			cout << "[5]Вариант    ->     Case" << endl;
			break;

		case 6:
			cout << "[6]Константа    ->     Const" << endl;
			break;

		case 7:
			cout << "[7]Обьект    ->     Obgect" << endl;
			break;

		case 8:
			cout << "[8]Переход на    ->     Go to" << endl;
			break;

		case 9:
			cout << "[9]Выполнять    ->     Do" << endl;
			break;

		case 10:
			cout << "[10]Уменьшить до    ->     Downto" << endl;
			break;
			
		case 11:
			cout << "[11]Иначе    ->     Else" << endl;
			break;

		case 12:
			cout << "[12]Конец блока    ->     End" << endl;
			break;

		case 13:    
			cout << "[13]Файл     ->     File" << endl;
			break;

		case 14:
			cout << "[14]Для     ->     For" << endl;
			break;

		case 15:
			cout << "[15]Функция     ->     Function" << endl;
			break;

		default:
			cout << "ЛЭЭЭЭЭЭЭЭЭЭЭЭЭ КУДА ПРЁШЪ??!?!?!?!?!?" << endl;
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
		cout << "[-] Выберите значение: " << endl;

		int translate;
		cin >> translate;

		switch (translate) {
		case 1:
			cout << "[1]Absolute     ->     Абсолютный " << endl;
			break;

		case 2:
			cout << "[2]And     ->     Логическое И " << endl;
			break;

		case 3:
			cout << "[3]Array     ->     Массив " << endl;
			break;

		case 4:
			cout << "[4]Begin     ->     Начало блока " << endl;
			break;

		case 5:
			cout << "[5]Case     ->     Вариант " << endl;
			break;

		case 6:
			cout << "[6]Const     ->     Константа " << endl;
			break;

		case 7:
			cout << "[7]Obgect     ->     Логическое И " << endl;
			break;

		case 8:
			cout << "[8]Go to     ->     Логическое И " << endl;
			break;

		case 9:
			cout << "[9]Do     ->     Логическое И " << endl;
			break;

		case 10:
			cout << "[10]Downto     ->     Логическое И " << endl;
			break;

		case 11:
			cout << "[11]Else     ->     Логическое И " << endl;
			break;

		case 12:
			cout << "[12]End     ->     Логическое И " << endl;
			break;

		case 13:
			cout << "[13]File     ->     Логическое И " << endl;
			break;

		case 14:
			cout << "[14]For     ->     Логическое И " << endl;
			break;

		case 15:
			cout << "[15]Function     ->     Логическое И " << endl;
			break;
		default:
			cout << "ЛЭЭЭЭЭЭЭЭЭЭЭЭЭ КУДА ПРЁШЪ??!?!?!?!?!?" << endl;
			break;
		}
		break;


	case 3:
		system("cls");
		break;

	default:
		cout << "Нипонял :|" << endl;
		break;




	}

	int x; cin >> x;
}