#include <iostream>
using namespace std;
void sorting_array(int arr[], int size)
{
    int zero_count=0;
    int one_count=0;
    int brr[9]={};//empty array created of size "9"
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            zero_count++;
        }
        else if (arr[i]==1)
        {
            one_count++;
        }
    }
    for(int i=0;i<zero_count;i++)
    {
        arr[i]=0;
    }
    for(int i=zero_count;i<size;i++)
    {
       arr[i]=1;
    }
}
int main ()
{
  int arr[]={1,0,0,1,1,0,0,0,1};
  int size=9;
  sorting_array(arr,size);
  for(int i=0;i<size;i++)
  {
      cout << arr[i] << " ";
  }
    
    return 0;
}
