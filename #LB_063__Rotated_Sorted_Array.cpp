#include <iostream>
using namespace std;
int rotated_array(int arr[], int size)
{
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;   //finding the mid!!
        if(arr[mid]=arr[start])
        {
            return start;  //returning the start or end value if the position will be same!!
        }
        else if(arr[mid]>arr[mid+1])  
            //checking the whether the mid element is agreater than mid+1 or not.!!
        {
            return mid;
        }
        else if(arr[mid-1]>arr[mid])    //checking whether the mid-1 element is greather than the mid element. 
        {
            return mid-1;  //we are returining the values of mid-1 after checking the conditions!!
        }
        else if(arr[start]>arr[mid])  //checking whether the element at start is greater than mid or not?
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
    int arr[]={4}; // arr[]={4,6,8,10,2};   //an array of size 5 is created!!  
    int size=sizeof(arr)/sizeof(arr[0]);   //finding the size using the sizeof function
    int result=rotated_array(arr,size);
    cout << "The Pivot Element is: " << arr[result];



    return 0;
}
