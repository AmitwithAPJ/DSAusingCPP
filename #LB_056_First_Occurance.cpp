//Program for first occurance in an array !!
//using two-pointers approach
#include <iostream>
using namespace std;
int first_occurance(int arr[], int size, int target)
{
    int start=0;   //setting the starting point 
    int end=size-1;  //setting the end point
    int mid;
    int temp_ans=-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(target==arr[mid])
        {
           temp_ans=mid;
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
    return temp_ans;
}
int main ()
{
    int arr[]={10,20,30,37,38,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=30;
    int result=first_occurance(arr,size,target);
    if(result!=-1)
    {
    cout << "The First Occurance of " << target << " is: " << result;
    }
    else 
    {
        cout << target << " isn't founded!!!";
    }
    return 0;
}
