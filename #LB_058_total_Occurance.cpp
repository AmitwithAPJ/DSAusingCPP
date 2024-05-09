#include <iostream>
using namespace std;
int total_occurance(int arr[], int size, int target)
{
    int start=0;
    int end=size-1;
    int result;
    int mid;   //declaraling mid to know the total occurance thr BS
    while(start<=end)
    {
        mid=(start+end)/2;
        if(target==arr[mid])
        {
            result=mid;
            start=mid+1;
        }
        else if(target<arr[mid])
        {
            end=mid-1;
        }
        else if(target>arr[mid])
        {
            start=mid+1;
        }
    }
    start=0;
    end=size-1;
    int result2;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(target==arr[mid])
        {
            result2=mid;
            end=mid-1;
        }
        else if(target<arr[mid])
        {
            end=mid-1;
        }
        else if(target>arr[mid])
        {
            start=mid+1;
        }
    }
    return (result-result2+1);
}
int main()
{
    int arr[]={10,20,30,30,30,30,40,50,60};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=30;
    int result3=total_occurance(arr,size,target);
    cout << "The Total Occurance is: " << result3;
    

    return 0;
}
