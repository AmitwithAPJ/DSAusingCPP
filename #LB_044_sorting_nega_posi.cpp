#include <iostream>
using namespace std;
void sorting(int arr[], int size)
{
    for(int i=0,j=size-1;i<j;)
    {
        if(arr[i]>0 && arr[j]<0)
        {
            swap(arr[i],arr[j]);  //
            i++;
            j--;
        }
        else if(arr[i]<0)
        {
            i++; //incrementing the value of i
        }
        else if(arr[j]>0)
        {
            j--;
        }
    }
}
int main()
{
 int arr[]={23,-7,12,-10,-11,40,60}; 
 int size=sizeof(arr)/sizeof(arr[0]);
 sorting(arr,size);
 for(int i=0;i<size;i++)
 {
     cout << arr[i] << " ";
 }
    return 0;
}
