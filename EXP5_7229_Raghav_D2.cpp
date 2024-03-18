#include <iostream>
using namespace std;

class Square {
public:
    double getArea() const;

    double sideLength;
};

double Square::getArea() const {
    return sideLength * sideLength;
}

int main() {
    Square mySquare;
    float inp;
    cout << "enter the length of the square ";
    cin >> inp;
    mySquare.sideLength = inp;

    double area = mySquare.getArea();
    std::cout << "Area of the square: " << area << std::endl;

    return 0;
}
