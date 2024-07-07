/* program for allcating the variable in free space and again deleting the allocated using new and delete operator respectively.

 nothrow operator: it will tell the compilar to declare a function which will never throw a exception whenever it is called..
*/
#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int *a(nullptr);

    // initializing the varial and allocating the new free space
    a = new (nothrow) int;
    if (!a)
    {
        cout << "allocation failed!!" << endl;
    }
    else
    {
        *a = 25;
        cout << "value of ptr: " << *a << endl;
    }

    float *b;
    b = new float(99.99);
    cout << "value of b: " << *b << endl;

    // initializing using array
    int array = 5;
    int *c;
    c = new (nothrow) int[array];
    if (!c)
    {
        cout << "allocation failed\n";
    }
    else
    {
        cout << "values of c: ";
        for (int i = 0; i <= array; i++)
        {
            cout << i << " ";
        }
    }

    //  freed the allocated memory
    delete a;
    delete b;
    delete[] c;

    return 0;
};