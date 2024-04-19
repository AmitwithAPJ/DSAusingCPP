#include <iostream>
using namespace std;
int total_occurance(int arr[], int size, int target)
{
   int start=0;
   int end=size-1;
   int half_count=0;
   int half_count1=0;
   while(start<=end)
   {
    int mid=start+(end-start)/2;
     if(arr[mid]==target)
    {
       half_count++;
       end=mid-1;
       cout << "The Mid will shifted toward Second Half of the aray!!";
    }
    else if(target>arr[mid])
    {
        start=mid+1;
    }
    else
    {
        end=mid-1;
    }
    cout << "The End part will be in the new part of array whereas previous part will remain!!"
   }
   start=0;
   end=size-1;
   while(start<=end)
   {
    int mid=start+(end-start)/2;
     if(arr[mid]==target)
    {
       half_count1++;
       start=mid+1;
    }
    else if(target>arr[mid])
    {
        start=mid+1;
    }
    else
    {
        end=mid-1;
    }
   int total_count=half_count1+half_count-1;
   return total_count;
}
int main()
{
    int arr[]={10,20,30,30,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=30;
    int result=total_occurance(arr,size,target);
    cout << "The Total Occruance is: " << result << endl;


    return 0;
}