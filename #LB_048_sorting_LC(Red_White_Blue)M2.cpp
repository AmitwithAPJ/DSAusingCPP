#include <iostream>
#include <vector>
using namespace std;
void sorting_array(int arr[], int size)
{
    vector<int>brr;
    int zero_count=0; //zero_count variable 
    int one_count=0;
    int two_count=0;  //variable taken to store the "2"
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            zero_count++;
        }
         if(arr[i]==1)
        {
            one_count++;
        }
         if(arr[i]==2)
        {
            two_count++;
        }
    }
    for(int i=0;i<zero_count;i++)
    {
        brr.push_back(0);
    }
    for(int i=zero_count;i<(zero_count+one_count);i++)
    {
        brr.push_back(1);
    }
    for(int i=(zero_count+one_count);i<size;i++)
    {
        brr.push_back(2);
    }
    for(int i=0;i<brr.size();i++)
    {
        arr[i]=brr[i];
    }
}  
int main()
{
    int arr[]={2,0,0,1,0,1,0,2,1,2,0,1,2,1,0,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    sorting_array(arr,size);
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}
