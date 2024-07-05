//Extreme Point Printing in an array!!
//Remember equal case will be printed twice so make extra conditions to handle that case!!
#include <iostream>
using namespace std; 
int extreme_point(int arr[], int size)  //extreme_point function created to print the extreme points of an array
{
    for (int left=0,right=size-1;left<=right;left++,right--)  //left & right variables created to access an index in an array
    {
        if(left==right)     //condition to handle the equal case so that it didn't get printed twice
        {
            cout << arr[left];
        }
        else
        {
        cout << arr[left] << " ";  
        cout << arr[right] << " ";
        }
    }
    return 0;
}
int main()
{
    int size=9;    
    int arr[9]={2,4,6,8,10,12,14,16,18};   //an array of size "9" is created!!
    extreme_point(arr,size);   //passing array and size in the extreme_point function!!
    return 0;
}
