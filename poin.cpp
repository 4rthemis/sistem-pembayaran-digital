
#include <iostream>
#include <cmath>

using namespace std;

class Point {
    private:
        int x;
        int y;
    public:
        Point(int x, int y) : x(x), y(y) {}

        double distanceFromOrigin() {
            return sqrt(x * x + y * y);
        }
        void printPoint() {
            cout << "Titik : (" << x << ", " << y << ")" << endl;
        }
};

int main() {

    Point point1(3, 4);    
    point1.printPoint();
    cout << "Jarak dari titik awal (0, 0) adalah: " << point1.distanceFromOrigin() << endl;

    return 0;
}