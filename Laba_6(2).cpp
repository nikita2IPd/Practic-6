#include <iostream>
using namespace std;

int main() {
    setlocale(0, "Russian");
    int height;


    cout << "Введите высоту треугольника и трапеции: ";
    cin >> height;

    cout << "Равнобедренный треугольник:\n";
    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= height - i; ++j)
            cout << " ";
        for (int k = 1; k <= 2 * i - 1; ++k)
            cout << "*";
        cout << "\n";
    }

    cout << "\nРавнобедренная трапеция:\n";
    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= height - i; ++j)
            cout << "   ";
        for (int k = 2; k <= 1 * i - 1; ++k)
            cout << "******";
        cout << "\n";
    }

    return 0;
}