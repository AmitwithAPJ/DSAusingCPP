#include <iostream>
using namespace std;
void sorting_check(int arr[], int size)
{
    int left=0;
    int right=size-1;
    while(left<=right) //condition for the while loop
    {
        while(arr[left]==0 && left<=right)
        {
            left++;
        }
        while(arr[right]==1 && left<=right)
        {
            right--;
        }
        if(left<=right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}
int main ()
{
    int arr[]={1,0,0,1,0,0,1,1,0};   //initializing array
    int size=9;
   // int size = sizeof(arr)/sizeof(arr[0]);
    sorting_check(arr,size);
    for (int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    
    
    
    return 0;
}
