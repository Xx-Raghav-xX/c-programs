//Define constructor. Create a Number class. Include one constructure to initialize the data members of
//class. Also add the function to convert a decimal number into binary number.
#include <iostream>
using namespace std;

 
class Number
{

public:
Number (int num):num (num)
  {
  } 
 
 
void decimal_to_binary ()
  {
	
if (num == 0)
	  {
		
std::cout << 0;
		
return;
	  
}
	
char binary[32];
	
int index = 0;
	
while (num > 0)
	  {
		
binary[index++] = num % 2 ? '1' : '0';
		
num /= 2;
	  
}
	
 
for (int i = index - 1; i >= 0; i--)
	  {
		
std::cout << binary[i];
  
} 
} 
 
 
int num;

};


 
int
main ()
{
  
int numb;
  
cin >> numb;
  cout << "Enter the number " << endl;
Number number (numb);
  
std::cout << "The binary equivalent of " << number.num << " is ";
  
number.decimal_to_binary ();
  
std::cout << std::endl;
  
return 0;

}


