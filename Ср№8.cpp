#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
    setlocale(0, "");
    cout << "[+]��������\n";
    cout << "[+]�������� ������ ��� ��������\n\n";
    cout << "[1]�����\n";
    cout << "[2]�������\n";
    cout << "[3]������ �������\n";
    cout << "[4]�������������\n\n";
    cout << "������� ������:";
    int figyra;
    cin >> figyra;
    switch (figyra) {
    case 1:
        cout << "������ �����\n\n";
        cout << "��������: ";
        char texture;
        cin >> texture;
        cout << "������: ";
        int size;
        cin >> size;
            Sleep(20);
            for (int x = 0; x < size; x++) {
                cout << texture;
            }
            break;

    case 2:
        cout << "������ ������� \n\n";
        cout << "��������: ";
        char texture1;
        cin >> texture1;
        cout << "������: ";
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
        cout << "������ ������ ������� \n\n";
        cout << "��������: ";
        char texture2;
        cin >> texture2;
        cout << "������: ";
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
        cout << "������ ������������� \n\n";
        cout << "��������: ";
        char texture2;
        cin >> texture2;
        cout << "������: ";
        int size y;
        cin >> size y;
        cout << "������: ";
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
        cout << "������! �������� ��������!";
        break; 
    }
    return 0;
}
