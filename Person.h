#include<iostream>
class Person
{ 
public: 
//Default constructor 
Person(); 
//Overloaded constructor 
Person(int age); 
template <class T, class U> 
void PrintValue(T var1, U var2); 
int GetAge(); 
 
private: 
int mAge;
};

template <class T, class U> 
void Person::PrintValue(T var1, U var2) 
{ 
if(mAge < 10) 
{ 
cout << var1 << endl; 
} 

else 
{ 
cout << var2 << endl; 
} 
}

