#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int number = 15;
    long long result = factorial(number);

    cout << "Факториал числа " << number << " равен: " << result << endl;

    return 0;
}
