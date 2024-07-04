// Renaming the structure and using the typedef.
// typedef is a keyword that is used to assign a new name to any existing data-type.
#include <iostream>
using namespace std;

typedef struct Rename
{
    int r1;
    char r2;
    float r3;
} name;

int main()
{
    name r;
    r.r1 = 10;
    r.r2 = 'R';
    r.r3 = 49.99;
    cout << "integer: " << r.r1 << endl;
    cout << "charater: " << r.r2 << endl;
    cout << "float: " << r.r3 << endl;
    return 0;
};