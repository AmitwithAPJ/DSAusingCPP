#include <iostream>
using namespace std;
void shifting_array(int arr[], int size)
{
    int temp1=arr[size-1];
    int temp2=arr[size-2];
    for(int i=size-1;i>1;i--)
    {
        arr[i]=arr[i-2];
    }
    arr[0]=temp2;
    arr[1]=temp1;
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    int size=sizeof(arr)/sizeof(arr[0]);
    shifting_array(arr,size);
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}