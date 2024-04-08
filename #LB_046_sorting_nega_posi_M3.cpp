#include <iostream>
#include <vector>
using namespace std;
void sorting(int arr[], int size)
{
    vector<int>brr;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            brr.push_back(arr[i]);
        }
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            brr.push_back(arr[i]);
        }
    }
    for(int i=0;i<brr.size();i++)
    {
        arr[i]=brr[i];
        cout << arr[i] << " ";
    }
}
int main()
{
int arr[]={23,-7,12,-10,-11,40,60};
int size=sizeof(arr)/sizeof(arr[0]);
sorting(arr,size);

    
    return 0;
}