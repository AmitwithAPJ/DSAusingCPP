#include <iostream>
using namespace std;
void shifting_array(int arr[], int size)  //shifting_array function used to do shifting of elements!!
{
    int temp1=arr[size-1];   //tenp1 variable stores array's initial element..
    int temp2=arr[size-2];   //temp2 varaible stores the array second most initaial element..
    for(int i=size-1;i>1;i--)
    {
        arr[i]=arr[i-2];   //updating the array elements to make the shift 
    }
    //updating the remaining cases
    arr[0]=temp2;   
    arr[1]=temp1;
}
int main()
{
    int arr[]={10,20,30,40,50,60};   //an array of size of 6 is created!!
    int size=sizeof(arr)/sizeof(arr[0]);
    shifting_array(arr,size);   //passing argument to the fucntion.
    //printing the shifted array after the updation!!
    for(int i=0;i<size;i++)  
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
//Note:- You Can use another function printing the element (Before & After)!!
