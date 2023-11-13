#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;

    cout << "Введите количество чисел: ";
    cin >> n;

    cout << "Число\tКвадрат\tКуб" << endl;

    for (int i = 1; i <= n; i++) {
        int square = i * i;
        int cube = i * i * i;
        cout << i << "\t" << square << "\t" << cube << endl;
    }

    return 0;
}