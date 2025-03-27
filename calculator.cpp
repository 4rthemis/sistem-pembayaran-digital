#include <iostream>
using namespace std;

class Calculator {
public:
    int Add(int a, int b) {
        return a + b;
    }

    int Sub(int a, int b) {
        return a - b;
    }

    int Mul(int a, int b) {
        return a * b;
    }

    int Div(int a, int b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;
    int num1, num2;
    char op;

    cout << "Masukan 2 angka : ";
    cin >> num1 >> num2;

    cout << "Pilih operasi : (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+': cout << "Hasil: " << calc.Add(num1, num2) << endl; break;
        case '-': cout << "Hasil: " << calc.Sub(num1, num2) << endl; break;
        case '*': cout << "Hasil: " << calc.Mul(num1, num2) << endl; break;
        case '/': cout << "Hasil: " << calc.Div(num1, num2) << endl; break;
        default: cout << "Operasi tidak valid!" << endl;
    }

    return 0;
}
