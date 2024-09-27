 
#include <iostream> 
using namespace std; 
 
int main() 
{ 
    // Allocate memory for an integer using new 
    void* voidPtr = new int; 
 
    // Type casting the void pointer to int* for usage 
    int* intPtr = static_cast<int*>(voidPtr); 
 
    // Assign a value to the allocated memory 
    *intPtr = 42; 
 
    // Print the value from the allocated memory 
    cout << "Value from allocated memory: " << *intPtr << endl; 
 
    // Deallocate the memory 
    delete intPtr; 
 
    return 0;
}