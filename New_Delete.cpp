/*
NEW: The new operator denotes a request for memory allocation on the Free Store. If sufficient memory is available,
    a new operator initializes the memory and returns the address of the newly allocated and initialized memory to the pointer variable.

DELETE: It will delete the value allocated new operator


*/
#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    float *add;
    ptr = new int; // Allocation of memory on free space

    add = new float(1.618);

    cout << "Address of ptr: " << ptr << endl;
    cout << "value of ptr: " << *ptr << endl; // Garbage value bcuz no value is initialized here

    cout << endl;

    cout << "Address of add: " << add << endl;
    cout << "value of add: " << *add << endl;

    delete add; // Deletion of value and making the fee space in the memory
    cout << "Address of deleted varialble: " << add << endl;
    cout << "value of deleted varialble: " << *add << endl;
    return 0;
};