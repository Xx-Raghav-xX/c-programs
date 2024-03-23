//examples on how binary operator overloading is implemented using friend functions.
#include <iostream>

class Complex {
private:
  int real;
  int imag;

public:
  
  Complex(int r = 0, int i = 0) : real(r), imag(i) {}

  friend Complex operator+(const Complex& c1, int value);


  void display() const {
    std::cout << real << " + " << imag << "i" << std::endl;
  }
};

Complex operator+(const Complex& c1, int value) {
  return Complex(c1.real + value, c1.imag);
}

int main() {
  Complex comp1(3, 2);

  std::cout << "Complex number: ";
  comp1.display();

  Complex result = comp1 + 5;

  std::cout << "After adding 5: ";
  result.display();

  return 0;
}
