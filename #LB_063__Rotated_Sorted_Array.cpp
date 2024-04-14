#include <iostream>
using namespace std;
int rotated_array(int arr[], int size)
{
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]=arr[start])
        {
            return start;
        }
        else if(arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if(arr[mid-1]>arr[mid])
        {
            return mid-1;
        }
        else if(arr[start]>arr[mid])
        {
            end=mid-1;
        }
        else 
        {
            start=mid+1;
        }
    }
}
int main()
{
    int arr[]={4}; // arr[]={4,6,8,10,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=rotated_array(arr,size);
    cout << "The Pivot Element is: " << arr[result];



    return 0;
}