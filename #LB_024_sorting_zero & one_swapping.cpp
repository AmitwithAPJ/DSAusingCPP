#include <iostream>
using namespace std;
void sorting_pointers(int arr[], int size)  //sorting_pointers function!!
{
    for(int i=0,j=size-1;i<j;)  //for loop function!!
    { 
      if(arr[i]==0 && arr[j]==1)
      {
          i++;   //this will increase the i's value!!
          j--;   //this will decrease the j's value!!
      }
      else if(arr[i]==1 && arr[j]==0)
      {
         swap(arr[i],arr[j]);   //swap the element present at ith and jth position.
         i++;
         j--;  //j will be drecement to shift the position.
      }
      else if(arr[i]==0 && arr[j]==0)
      {
          i++;
      }
      else
      {
          j--;
      }
    }
}
int main ()
{
    int arr[]={0, 1, 0, 1, 0, 0, 1, 0, 1};  //an array of size 9 
    int size=9;
    sorting_pointers(arr,size);  // passing the argument in the sorting_pointers!!
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
