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
    cout << "[4]Прямоугольник\n\n";
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
        char texture2;
        cin >> texture2;
        cout << "Высота: ";
        int size y;
        cin >> size y;
        cout << "Ширина: ";
        int size x;
        cin >> size x;
        for (int y = 0; y < size y; y++) {
            Sleep(20);
            for (int x = 0; x < size x; x++) {
                if (y == 0 || y == size x - 1 || x == 0 || x == size x - 1) {
                    cout << texture2 << " ";
                }
                else {
                    cout << "  ";
                }

            }
            cout << "\n";
        }
        break;

    default:
        cout << "Ошибка! Неверное значение!";
        break; 
    }
    return 0;
}
