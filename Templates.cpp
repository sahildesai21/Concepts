/*
For class, objects are the templates. Simalarly for Tmplates, classes are the templates.
What is Templates and why to use templates?
=> 1. In order to avoid the Dry(donot repeat yourself) Princlipe {typing the multiple block of code (classes- which allows/work on only one kind of data type) for different-differnet
      data types (int,flot,doble,chgar,etc) }
   2.  generic programming: Does not declare of specific data type. It means the block of code declare all kind of data type(int,float,double,char,etc)... 

    syntax: template <class T>
*/
#include<iostream>
using namespace std;
template <class T>
class T{
    public:
        vector (int *arr){
            cout<<"hello"<<endl;
        }
};
int main()
{
    system("cls");
    int ptr=5; 
    vector<int>vector();
    return 0;
};