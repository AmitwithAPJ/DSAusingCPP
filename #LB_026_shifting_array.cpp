#include <iostream>
using namespace std;
void shifting_array(int arr[], int brr[],int size)
{
    brr[0]=arr[size-1];
    for(int i=0;i<size-1;i++)
    {
        brr[i+1]=arr[i];
    }
}
int main ()
{
    int brr[6]={};
    int arr[]={10,20,30,40,50,60};
    int size=sizeof(arr)/sizeof(arr[0]);
    shifting_array(arr,brr,size);
    for (int i=0;i<size;i++)
    {
        cout << brr[i] << " ";
    }

    
    return 0;
}