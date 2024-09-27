
#include <iostream>
using namespace std;
// Class template with multiple and default parameters 
template <class T, class U> 
class ClassTemplate { 
 
private: 
 T var1; 
 U var2; 
  
 string name; 
public: 
 //Default constructor 
 ClassTemplate(); 
  
 //Overloaded constructor 
 ClassTemplate(T v1, U v2, string newName); 
  
 T GetVar1() const; 
 T GetVar2() const; 
 
 string GetName(); 
 
}; //Class declaration ends here 
template <class T, class U> 
ClassTemplate<T, U>::ClassTemplate() 
{ 
   name = ""; 
} 
 
//Overloaded constructor 
template <class T, class U> 
ClassTemplate<T, U>::ClassTemplate(T v1, U v2, string newName) 
{ 
   var1 = v1; 
   var2 = v2; 
 
   name = newName; 
} 
 
template <class T, class U> 
T ClassTemplate<T, U>::GetVar1() const 
{ 
   return var1; 
} 
 
template <class T, class U> 
T ClassTemplate<T, U>::GetVar2() const 
{ 
   return var2; 
} 
 
template <class T, class U> 
string ClassTemplate<T, U>::GetName() 
{ 
   return name; 
}