//Program for Summation of element in an array
#include <iostream>
using namespace std;
int main ()
{
    int arr[10];  //array of size 10 created
    int size=10;
    for (int i=0;i<size;i++)
    {
        cout << "enter the elements: " ;
        cin >> arr[i];   //taking the inputs (index wise)
    }
    for (int i=0; i<size;i++)
    {
        int sum=0;        //sum variable created to store the values after each summation
        sum=sum+arr[i];   //summation of element through indexes
    }
    cout << "The Summation of array elements are: " << sum;  //printing the sum value
    
    
    
    return 0;
}
