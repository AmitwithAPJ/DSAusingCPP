#include <iostream>
using namespace std;
int missing_element(int arr[], int size)//
{
   int mid;
   int start=0;
   int end=size-1;  //setting end's value
   while(start<=end)
   {
      mid=start+(start/end)/2;
      if(arr[mid]==mid+1){
         start=mid+1;
      }
      else if(arr[mid]=mid+2)
      {
         end=mid-1;
      }
   }
   return mid;
}
int main()
{
   int arr[]={1,2,3,4,5,6,8,9,10};
   int size=sizeof(arr)/sizeof(arr[0]);
   int result=missing_element(arr,size);
   cout << "The Missing Element is: " << result+1;
   return 0;
}
