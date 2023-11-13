#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int number;
    int count = 0;
    int sum = 0;

    cout << "Введите числа (введите 0 для завершения):" << endl;

    while (true) {
        cin >> number;

        if (number == 0) {
            break;
        }

        count++;
        sum += number;
    }

    double average = static_cast<double>(sum) / count;

    cout << "Количество введенных чисел: " << count << endl;
    cout << "Общая сумма чисел: " << sum << endl;
    cout << "Среднее арифметическое: " << average << endl;

    return 0;
}