#include <iostream>
using namespace std;
int binary_seacrh(int arr[],int size, int target)
{
    int start=0;   //
    int end=size-1;
    while(start<=end)
    {
        int mid=(start+end)/2; finding the mid!!
        if(target==arr[mid])
        {
            return 1;  //returning "true" value
        }
        else if(target>arr[mid])
        {
            start=mid+1;
        }
        else if(target<arr[mid])
        {
            end=mid-1;
        }
    }
    return 0;
}
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=-90;
    if(binary_seacrh(arr,size,target))
    {
        cout << "The Target Found!!";
    }
    else
    {
        cout << "Target not Found !!";
    }

    
    return 0;
}
