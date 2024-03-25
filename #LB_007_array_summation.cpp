#include <iostream>
using namespace std;
int main ()
{
    int arr[10];
    int size=10;
    for (int i=0;i<size;i++)
    {
        cout << "enter the elements: " ;
        cin >> arr[i];
    }
    for (int i=0; i<size;i++)
    {
        int sum=0;
        sum=sum+arr[i];
    }
    cout << "The Summation of array elements are: " << sum;
    
    
    
    return 0;
}