#include <iostream>
using namespace std;
int pivot_element(int arr[], int size)
{
    int start=0;   //satrt set to zero
    int end=size-1;
    int ans=0;
    if (arr[start] < arr[end]) // Array is not rotated, return the first index
       {
         return 0;
       }
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if(arr[mid]<arr[mid-1])
        {
            return mid-1;
        }
        else if(arr[start]>=arr[mid])
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
}
int finding_target(int arr[], int start, int end, int target)
{
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(target>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}
void indexing(int arr[], int size, int pivot, int target)
{
   int result=0;
   if(target<=arr[pivot] && target>=arr[0])
   {
      result=finding_target(arr,0,pivot,target);
   }
   else
   {
      result=finding_target(arr,pivot+1,size-1,target);
   }
   if(result != -1)
   {
    cout << "The Target Found at: " << result << endl;
   }
   else
   {
      cout << "Target Not Found!!" << endl;
   }
}
int main()
{
    int arr[]={4,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=4;
    int pivot=pivot_element(arr,size);
    indexing(arr,size,pivot,target);
    return 0;
}
