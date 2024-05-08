#include <iostream>
using namespace std;
int Peak_Element(int arr[], int size)
{
    int start=0;
    int end=size-1;   //setting the size of end
    int ans=0;
    while(start<end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]>=arr[mid-1])
        {
            start=mid+1;
            ans=mid;
        }
        else if(arr[mid]>arr[mid+1])
        {
            end=mid-1;
        }
    }
    return ans;
}
int main()
{
    int arr[]={10,20,30,60,50,40};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result= Peak_Element(arr,size);
    cout << "The Peak Element is: " << arr[result] << endl;




    return 0;
}
