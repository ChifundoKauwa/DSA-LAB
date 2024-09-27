#include <iostream>
#include Person.h
int main() 
{ 
Person person = Person(15); 
return 0; 

person.PrintValue<float, string>(-1.0f, "Age is greater than 10"); 
}