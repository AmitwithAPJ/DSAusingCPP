#include <iostream>
using namespace std;
//Extreme Point Printing array!!
//Remember equal case will be printed twice so make extra conditions!!
int extreme_point(int arr[], int size)
{
    for (int left=0,right=size-1;left<=right;left++,right--)
    {
        if(left==right)
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
    int arr[9]={2,4,6,8,10,12,14,16,18};
    extreme_point(arr,size);
    return 0;
}
