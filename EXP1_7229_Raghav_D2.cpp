//Develop a logic that allows the user to keep entering
//numbers as long as the input is valid and also displays a count of the valid numbers.
#include<iostream>
using namespace std;
int main()
{
    int count, number;
    start:
    cout << "enter a number : "<< endl;
    cin >> number;
    if(number%8==0)
    {
        count++;
        goto start;
    }
    cout << "the numbers are done printing" << endl;
    cout << "total " << count << " numbers are entered";
    return 0;
}
