//Using array as a function!!
#include <iostream>
using namespace std;
void basic_array(int arr[], int size) // an array function is created (basic_array)
{
    for(int i=0;i<size;i++)
    {
        cout << "Enter the Element: ";
        cin >> arr[i];     //taking inputs in an array(arr) using index values!!
    }
}
int main ()
{
    int arr[5];  //array of size "5" is created
    int size=5;
    basic_array(arr,size);   //calling basic_array fucntion
    //arguments(arr & size) has been passed to the fucntion basic_array
    return 0;
}
