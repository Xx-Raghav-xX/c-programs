//9.	Create a class Named StringOperation, take a input of any string variable and to perform the following operations on strings. Note: Don’t use any of the string library functions.
//•	Finding the length of the string
//•	Finding the reverse of the string
//•	Finding the concatenation of 2 strings
//•	To compare 2 strings.

#include <iostream>

class StringOperation {
public:
    StringOperation(const char* str) {
        // Allocate memory to store the string
        int len = 0;
        while (str[len] != '\0') {
            len++;
        }
        data = new char[len + 1];

        // Copy the string character by character
        for (int i = 0; i <= len; i++) {
            data[i] = str[i];
        }
    }

    ~StringOperation() {
        delete[] data; // Deallocate memory
    }

    int length() {
        int count = 0;
        while (data[count] != '\0') {
            count++;
        }
        return count;
    }

    char* reverse() {
        int len = length();
        char* reversed = new char[len + 1];

        for (int i = 0; i < len; i++) {
            reversed[len - i - 1] = data[i];
        }
        reversed[len] = '\0';

        return reversed;
    }

    char* concatenate(const char* str2) {
        int len1 = length();
        int len2 = 0;
        while (str2[len2] != '\0') {
            len2++;
        }
        int total_len = len1 + len2;

        char* concatenated = new char[total_len + 1];

        for (int i = 0; i < len1; i++) {
            concatenated[i] = data[i];
        }
        for (int i = 0; i < len2; i++) {
            concatenated[len1 + i] = str2[i];
        }
        concatenated[total_len] = '\0';

        return concatenated;
    }

    int compare(const char* str2) {
        int i = 0;
        while (data[i] != '\0' && str2[i] != '\0' && data[i] == str2[i]) {
            i++;
        }

        if (data[i] == '\0' && str2[i] == '\0') {
            return 0; // Strings are equal
        } else if (data[i] < str2[i]) {
            return -1; // First string is less than second
        } else {
            return 1; // First string is greater than second
        }
    }

private:
    char* data; // Pointer to character array to store the string
};

int main() {
    const char* str = "Hello, world!";
    StringOperation strObj(str);

    int len = strObj.length();
    std::cout << "Length: " << len << std::endl;

    char* reversedStr = strObj.reverse();
    std::cout << "Reversed: " << reversedStr << std::endl;
    delete[] reversedStr; // Deallocate memory for reversed string

    const char* str2 = " How are you?";
    char* concatenatedStr = strObj.concatenate(str2);
    std::cout << "Concatenated: " << concatenatedStr << std::endl;
    delete[] concatenatedStr; // Deallocate memory for concatenated string

    int comparison = strObj.compare("Hello, World!");
    std::cout << "Comparison (case-sensitive): " << comparison << std::endl;

    return 0;
}
