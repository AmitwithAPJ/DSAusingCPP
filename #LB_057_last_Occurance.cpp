#include <iostream>
using namespace std;
int first_occurance(int arr[], int size, int target)
{
    int start=0;    //setting start as well!!
    int end=size-1;  //set end variable size 
    int mid;
    int temp_ans=-1;
    finfing the last occurance!!
    while(start<=end)
    {
        mid=(start+end)/2;
        if(target==arr[mid])
        {
           temp_ans=mid;
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
    return temp_ans;  //returning the last occured element in a sorted array!!
}
int main ()
{
    int arr[]={10,20,22,23,24,30,40,50};
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
