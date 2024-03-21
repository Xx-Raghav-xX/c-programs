//Create a class Room with Data members: length, breadth. Include functions get () and display () to get
//and display the data of room. Include two additional functions: area () and perimeter () to calculate the area
//and perimeter of the room. Implement the class by creating at least 5 objects of the class and display the area
//and perimeter of all 5 rooms.
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
room obj1 , ob2 , ob3 , ob4 , ob5;
  
obj1.get ();
  
obj1.display ();
  
obj1.area ();
  
obj1.perimeter ();

//--------------------------------------------------

obj2.get ();
  
obj2.display ();
  
obj2.area ();
  
obj2.perimeter ();

//--------------------------------------------------

obj3.get ();
  
obj3.display ();
  
obj3.area ();
  
obj3.perimeter ();


//--------------------------------------------------

obj3.get ();
  
obj3.display ();
  
obj3.area ();
  
obj3.perimeter ();


//--------------------------------------------------

obj4.get ();
  
obj4.display ();
  
obj4.area ();
  
obj4.perimeter ();


//--------------------------------------------------

obj5.get ();
  
obj5.display ();
  
obj5.area ();
  
obj5.perimeter ();
  
 
return 0;

}
