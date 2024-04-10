//Program for missing element in an array
#include <iostream>
using namespace std;
void missing_element(int arr[], int size, int total_nums)
{
    int temp=arr[0];
    for(int i=1;i<size;i++)
    {
        temp=(temp^arr[i]);
    }   
    for(int j=0;j<=total_nums;j++)
    {
        temp=(temp^j);
    }
    cout << "The Missing element is: " << temp;
}
int main()
{
   int arr[]={2,0,1,4,5,6,7};   
 int size=sizeof(arr)/sizeof(arr[0]);
 int total_nums=7;
 missing_element(arr,size,total_nums); 
    
    
    
    return 0;
}
