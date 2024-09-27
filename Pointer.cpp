
// to hold the address of any type-castable type 
 
#include <iostream> 
using namespace std; 
 
int main() 
{ 
    // Initializing multiple variables of different data 
    // type 
    int n = 10; 
    float f = 25.25; 
    char c = '$'; 
 
    // Initializing a void pointer 
    void* ptr; 
 
    ptr = &n; // pointing to int 
    cout << "The value of n " << n << endl; 
    cout << "The Address of n " << ptr << endl; 
 
    ptr = &f; // pointing to float 
    cout << "The value of f " << f << endl; 
    cout << "The Address of f " << ptr << endl; 
 
    ptr = &c; // pointing to char 
    cout << "The value of c " << c << endl; 
    cout << "The Address of c " << ptr << endl; 
     
    return 0; 
};