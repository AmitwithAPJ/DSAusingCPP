//Program to Doubling the element in the array
#include <iostream>
using namespace std;
int main ()
{
    int arr[10]; //an array created of size 10
    int size=10;
    for (int i=0;i<size;i++)
    {
        cout << "enter the elements: " ;
        cin >> arr[i];   //taking input for the created array
    }
    for (int i=0; i<size;i++)
    {
        arr[i]*=2;         // doubling of element in an array based on indexes
        cout << arr[i] << " ";  //printing of each element after doubling it
    }
    
    
    
    return 0;
}
