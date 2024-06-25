#include<string>
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    // Methods to declare the strings
    string s="Method 1 to declare string";
    string str("Method 2 to declare string");
    string str1(5,'M');
    cout<<s<<endl;
    cout<<str<<endl;
    cout<<str1<<endl;

    // Methods to take the input from the string
    string str2;
    cout<<"Enter the string 1:"<<endl;
    cin>>str2;
    cout<<"Method 1 to take the input from the string is: "<<str2<<endl;  //here it will only print the 1st word

    string str3;
    cout<<"Enter the string 2:"<<endl;
    cin>>str3;
    getline(cin, str3);
    cout<<"Method 2 to take the input from the string is: "<<str3<<endl; // here it will print complete sentence except the first word
    return 0;
};