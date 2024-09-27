#include<iostream>
#include ClassTemplate.h;
using namespace std;
int main() { 
ClassTemplate<int, double> tempObj(2, 10.5, "Test"); 
cout << "Name: " << tempObj.GetName() << endl; 
cout << "var1: " << tempObj.GetVar1() << endl; 
cout << "var2: " << tempObj.GetVar2() << endl; 
return 0; 
} 