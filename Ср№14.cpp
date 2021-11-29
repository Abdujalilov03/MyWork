#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    const int size = 10;
    int v1[size] = { 0,1,2,3,4,5,6,7,8,9,
    };
    for (int i = 0; i < size; i++) {
        cout << "[" << i + 1 << "]" << v1[i] << "\n\n";
    }
    const int size1 = 10;
    long v2[size1] = { 0,1,2,3,4,5,6,7,8,9,
    };
    for (int i = 0; i < size1; i++) {
        cout << "[" << i + 1 << "]" << v2[i] << "\n\n";
    }
    const int size2 = 10;
    short v3[size2] = { 0,1,2,3,4,5,6,7,8,9
    };
    for (int i = 0; i < size2; i++) {
        cout << "[" << i + 1 << "]" << v3[i] << "\n\n";
    }
    const int size3 = 10;
    float v4[size3] = { 0,1,2,3,4,5,6,7,8,9
    };
    for (int i = 0; i < size3; i++) {
        cout << "[" << i + 1 << "]" << v4[i] << "\n\n";
    }
    const int size4 = 10;
    double v5[size4] = { 0,1,2,3,4,5,6,7,8,9
    };
    for (int i = 0; i < size4; i++) {
        cout << "[" << i + 1 << "]" << v5[i] << "\n\n";
    }
    const int size5 = 10;
    char v6[size5] = { 'q','e','t','y','u','t','u','o','k','g'
    };
    for (int i = 0; i < size5; i++) {
        cout << "[" << i + 1 << "]" << v6[i] << "\n\n";
    }
    const int size6 = 10;
    bool v7[size6] = { true,false,false,false,true,false,false,false,true,true
    };
    for (int i = 0; i < size6; i++) {
        cout << "[" << i + 1 << "]" << v7[i] << "\n\n";
    }
    const int size7 = 10;
    string v8[size7] = { "Лев","Лошадь","Корова","Кабан","Лиса","Олень","Слон","Жираф","Волк","Тигр"
    };
    for (int i = 0; i < size7; i++) {
        cout << "[" << i + 1 << "]" << v8[i] << "\n\n";
    }
    return 0;
}