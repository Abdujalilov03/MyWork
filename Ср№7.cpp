#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    cout << "��������\n";
    cout << "�����\n";
    cout << "������: ";
   
    int n;
    cin >> n;

    int i = 1;

    while (i++ <= n)
       
        cout << '*';
    cout << endl;
    system("pause");
    return 0;
}