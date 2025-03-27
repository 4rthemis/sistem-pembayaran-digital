#include <iostream>
using namespace std;

class Hitungan {
private:
    int count; 

public:
    Hitungan() {
        count = 0;
    }

    void increment() {
        count++;
    }

    int getCurrentCount() const {
        return count;
    }
};

int main() {
    Hitungan counter;

    counter.increment();

    cout << "Jumlah hitungan : " << counter.getCurrentCount() << endl;

    return 0;
}
