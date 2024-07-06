#include <iostream>
using namespace std;
int x=5;  //global variable 
int main()
{
    cout << x <<endl;
    int x=10;        //local varaible created despite the name is same 
    cout << x << endl;
    {
       int x=20;        //another local variable created 
        cout << x << endl;
      x=5;              //updating the value of the variable which is most local!!
        cout << x  << endl;
        cout << ::x << endl;   //accessing global variable
    }
    cout << x << endl;
    cout << ::x<< endl; //accessing global variable 
    
    
    
    
    return 0;
}
   
