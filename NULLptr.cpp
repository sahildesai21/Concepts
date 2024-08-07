// C++ program to show comparisons with nullptr
#include <bits/stdc++.h>
using namespace std;

// Driver program to test behavior of nullptr
int main()
{
    // creating two variables of nullptr_t type ṇ
    // i.e., with value equal to nullptr
    nullptr_t np1, np2;

    // Initialize a pointer with value equal to np1
    char *x = np1;  // same as x = nullptr (or x = NULL
                    // will also work) 
    if (x == nullptr)
        cout << "x is null" << endl;
    else
        cout << "x is not null" << endl;

    return 0;
}
