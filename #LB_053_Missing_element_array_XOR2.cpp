#include <iostream>
using namespace std;
void missing_element(int arr[], int size, int total_nums)
{
    int sum_array=0;
    int total_sums=0;  //
    for(int i=0;i<size;i++)
    {
        sum_array=sum_array+arr[i];
    }
    for(int i=0;i<=total_nums;i++)
    {
       total_sums=total_sums+i; 
    }
    cout << "The Missing Element is: " << total_sums-sum_array;
}
int main()
{
int arr[]={2,0,1,4,5,6,7};
int total_nums=7;
int size=sizeof(arr)/sizeof(arr[0]);
missing_element(arr,size,total_nums);
    
    
    
    
    return 0;
}
