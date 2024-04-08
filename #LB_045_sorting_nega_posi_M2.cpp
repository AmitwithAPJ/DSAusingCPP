#include <iostream>
using namespace std;
void sorting(int arr[], int size)
{
    int left=0;
    int right=size-1;
    while(left<right)
    {
        while(arr[left]<0 && left<right)
        {
            left++;
        }
        while(arr[right]>0 && left<right)
        {
            right--;
        }
        if(left<right)
        {
            swap(arr[left],arr[right]);
        }
    }
}
int main()
{
 int arr[]={23,7,12,-10,-11};
 int size=sizeof(arr)/sizeof(arr[0]);
 sorting(arr,size);
 for(int i=0;i<size;i++)
 {
     cout << arr[i] << " ";
 }
    
    return 0;
}