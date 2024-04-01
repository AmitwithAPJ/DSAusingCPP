#include <iostream>
using namespace std;
void sorting_pointers(int arr[], int size)
{
    for(int i=0,j=size-1;i<j;)
    { 
      if(arr[i]==0 && arr[j]==1)
      {
          i++;
          j--;
      }
      else if(arr[i]==1 && arr[j]==0)
      {
         swap(arr[i],arr[j]);
         i++;
         j--;
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
    int arr[]={0, 1, 0, 1, 0, 0, 1, 0, 1};
    int size=9;
    sorting_pointers(arr,size);
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}