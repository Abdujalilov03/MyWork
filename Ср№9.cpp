#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
    setlocale(0, "");
    cout << "[+]Чертёжник\n";
    cout << "[+]Выберите фигуру для черчения\n\n";
    cout << "[1]Линия\n";
    cout << "[2]Квадрат\n";
    cout << "[3]Пустой квадрат\n";
    cout << "[4]Прямоугольник\n";
    cout << "[5]Треугольник\n\n";
    cout << "Введите фигуру:";
    int figyra;
    cin >> figyra;
    switch (figyra) {
    case 1:
        cout << "Фигура линия\n\n";
        cout << "Текстура: ";
        char texture;
        cin >> texture;
        cout << "Размер: ";
        int size;
        cin >> size;
        Sleep(20);
        for (int x = 0; x < size; x++) {
            cout << texture;
        }
        break;

    case 2:
        cout << "Фигура квадрат \n\n";
        cout << "Текстура: ";
        char texture1;
        cin >> texture1;
        cout << "Размер: ";
        int size1;
        cin >> size1;
        for (int y = 0; y < size1; y++) {
            Sleep(20);
            for (int x = 0; x < size1; x++) {
                cout << texture1 << " ";
            }
            cout << "\n";
        }
        break;

    case 3:
        cout << "Фигура пустой квадрат \n\n";
        cout << "Текстура: ";
        char texture2;
        cin >> texture2;
        cout << "Размер: ";
        int size2;
        cin >> size2;
        for (int y = 0; y < size2; y++) {
            Sleep(20);
            for (int x = 0; x < size2; x++) {
                if (y == 0 || y == size2 - 1 || x == 0 || x == size2 - 1) {
                    cout << texture2 << " ";
                }
                else {
                    cout << "  ";
                }

            }
            cout << "\n";
        }
        break;

    case 4:
        cout << "Фигура прямоугольник \n\n";
        cout << "Текстура: ";
        char texture3;
        cin >> texture3;
        cout << "Высота: ";
        int size3;
        cin >> size3;
        cout << "Ширина: ";
        int size4;
        cin >> size4;
        for (int y = 0; y < size3; y++) {
            Sleep(20);
            for (int x = 0; x < size4; x++) {
                if (y == 0 || y == size3 - 1 || x == 0 || x == size4 - 1) {
                    cout << texture3 << " ";
                }
                else {
                    cout << "  ";
                }

            }
            cout << "\n";
        }
        break;
    case 5:
        cout << "Фигура треугольник \n\n";
        cout << "Текстура: ";
        char texture4;
        cin >> texture4;
        cout << "Размер: ";
        int size5;
        cin >> size5;
        for (int y = 0; y < size5; y++) {
            Sleep(20);
            for (int x = 0; x < size5; x++) {
                cout << "* ";
            }
            cout << "\n";
        }
        break;



    default:
        cout << "Ошибка! Неверное значение!";
        break;
    }
    int _; cin >> _;
    return 0;
}
