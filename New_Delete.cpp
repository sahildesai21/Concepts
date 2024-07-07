#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    float *add;
    ptr = new int;

    add = new float(1.618);

    cout << "Address of ptr: " << ptr << endl;
    cout << "value of ptr: " << *ptr << endl; // Garbage value bcuz no value is initialized here
    cout << endl;
    cout << "Address of add: " << add << endl;
    cout << "value of add: " << *add << endl;
    return 0;
};