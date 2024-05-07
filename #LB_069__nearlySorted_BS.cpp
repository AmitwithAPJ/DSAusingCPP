//program for nearly sorted array through Binary Search !!
#include <iostream>
using namespace std;
int nearlysorted_BS(int arr[], int size, int target)   //setting the parameters in the nearly_sorted _BS
{
    int start=0;
    int ans=-1;
    int end=size-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid-1]==target)
        {
            return mid-1;
        }
        else if(arr[mid+1]==target)
        {
            return mid+1;
        }
        else if(target>arr[mid])
        {
            start=mid+2;
        }
        else
        {
            end=mid-2;
        }
    }
    return -1;
}
int main()
{
    int arr[]={20,10,40,30,60,50,70,80};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=0;
    int result=nearlysorted_BS(arr,size,target);
    if((result!=-1))
    {
    cout << "The Target Found at: " << result;
    }
    else 
    {
        cout << "Target Not Found!!";
    }


    return 0;
}
