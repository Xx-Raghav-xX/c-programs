#include<iostream>
using namespace std;

class room 
 { 
int l, b;

public:
void get () 
 { 
int length, breadth;
	
cout << "enter the length ";
	
cin >> length;
	
cout << endl;
	
cout << "enter the breadth ";
	
cin >> breadth;
	
l = length;
	
b = breadth;
  
} 
//--------------------------------------------------------------------------------------
void area () 
 { 
int area;
	
area = l * b;
	
cout << "the area is " << area << endl;
  
} 
//--------------------------------------------------------------------------------------
void perimeter () 
 { 
int perimeter;
	
perimeter = 2 * (l + b);
	
cout << "the perimeter is " << perimeter << endl;
  
} 
//--------------------------------------------------------------------------------------
void display () 
 { 
cout << "the length is ";
	
cout << l << endl;
	
cout << "the breadth is ";
	
cout << b << endl;
	
cout << "the perimeter is ";

 
} 
 
};


int
main () 
 { 
room obj1;
  
obj1.get ();
  
obj1.display ();
  
obj1.area ();
  
obj1.perimeter ();
  
 
return 0;

}
