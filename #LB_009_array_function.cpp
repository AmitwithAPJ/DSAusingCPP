//program to use array in function
#include <iostream>
using namespace std;
void basic_array(int arr[], int size)  //basic_array function created which will take input in an array
{
    for(int i=0;i<size;i++)
    {
        cout << "Enter the Element: ";
        cin >> arr[i];             //taking input through indexes
    }
}
int main ()
{
    int arr[5];    //array created of size 5
    int size=5;
    basic_array(arr,size);      //array and size of array is passed to the function (basic_array)
    return 0;
}
