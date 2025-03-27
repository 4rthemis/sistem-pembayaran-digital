#include <iostream>

using namespace std;

class Rectangle {
public:
    int hitungLuas(int panjang, int lebar) {
        return panjang * lebar;
    }
};

int main() {
    Rectangle rect;
    int panjang, lebar;

    cout << "Masukkan panjang dan lebar: ";
    cin >> panjang >> lebar;

    cout << "Luas: " << rect.hitungLuas(panjang, lebar) << endl;

    return 0;
}
