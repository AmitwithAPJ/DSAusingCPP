#include <iostream>
using namespace std;
#include <string>
int main()
{
   /*
    //old approach which is now useless in modern compilers!!
    const int x=5;
    cout << x << endl;
    int *p=x;
    p=10;   
    cout << x << endl;
   */ 

   //new method!!!
  /* int *a=new int;
   *a=2; //cannot do a=2 as a is pointer so we u have to put value then use dereference operator
   cout << *a << endl;
   int b=5;
   a=&b;
   cout << *a << endl;*/
  
 //Another approach
/*
 const int *a=new int(2); //const data & non-const pointer
 cout << *a << endl;
 //*a=20; //cannot update the constant value as pointer is referencing a const value!!
 cout << *a << endl;
 int b=20;
 a=&b;
 cout << *a << endl; */

//Another Approach!!

int *const a=new int(2); //non-const data and const pointer!!
cout << *a << endl;
*a=20;   //can be updated bcoz it is non-const 
cout << *a <<  endl;
int b=30;
//a=&b;   //const pointer cannot be updated!!
cout << *a << endl;

    return 0;
}
