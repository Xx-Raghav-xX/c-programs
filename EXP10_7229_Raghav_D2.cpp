// Write a program to accept 3 integers and find maximum among 3 numbers using functions and pointers.
#include <iostream>

using namespace std;

int findMax(int* a, int* b) {
  return (*a > *b) ? *a : *b;
}

int findMaxThree(int* num1, int* num2, int* num3) {
  int max_of_two = findMax(num1, num2);

  return findMax(&max_of_two, num3);
}

int main() {
  int num1, num2, num3;

  cout << "Enter three integers: ";
  cin >> num1 >> num2 >> num3;

  int* ptr1 = &num1;
  int* ptr2 = &num2;
  int* ptr3 = &num3;

  int max_number = findMaxThree(ptr1, ptr2, ptr3);

  cout << "Maximum number: " << max_number << endl;

  return 0;
}
