#include <iostream>
using namespace std;
void sorting_array(int arr[], int size)
{
   int left=0;      //
   int mid=0;
   int right=size-1;
   while(mid<right)
   {
        if(arr[mid]==0)  //the condition is for the mid which will be used in array!!
         {
            swap(arr[left],arr[mid]);
            left++;   //lweft incremented!!
            mid++;    //mid incremented in case to avoid edge cases.
         }
         else if(arr[mid]==1)
         {
            mid++;
         }
         else if(arr[mid]==2)
         {
             swap(arr[mid],arr[right]);
             right--;
         }
   }
}
int main()
{
    int arr[]={2,0,0,1,0,1,0,2,1,2,0,1,2,1,0,0};  //a long array created to check at vast level!!
    int size=sizeof(arr)/sizeof(arr[0]);  //finding the size of array thought the sizeof fucntion.
    sorting_array(arr,size);   //passing arguments to the sortibng_array function.
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}
