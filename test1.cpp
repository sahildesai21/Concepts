#include<iostream>
using namespace std;
int main()
{
    system("cls");
    unsigned int a=60;
    unsigned int b=13;
    int c=0;
    c=a|b;
    cout<<"OR of a,b: "<<c<<endl;
    c=a&b;
    cout<<"AND of a,b: "<<c<<endl;
    c=a^b;
    cout<<"XOR of a,b: "<<c<<endl;
    c=~a;
    cout<<"NOT of a: "<<c<<endl;
    c=a<<2;
    cout<<"Left shift of a: "<<c<<endl;
    c=a>>2;
    cout<<"Right shift of a: "<<c<<endl;
return 0;
};