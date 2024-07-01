#include <iostream>
#include <vector>
using namespace std;
void shifiting(int arr[], int size)   //function for shifting the elements in an array!!
{
    vector<int>brr;   //creating the vector name "brr"
    brr.push_back(arr[size-1]);
    brr.push_back(arr[size-2]);
    for(int i=0;i<size-2;i++)
    {
        brr.push_back(arr[i]);  
    }
    for(int i=0;i<brr.size();i++)
    {
        arr[i]=brr[i];
        cout << arr[i] << " ";
    }
}
int main ()
{
 int arr[]={10,20,30,40,50,60};
 int size=sizeof(arr)/sizeof(arr[0]);
 shifiting(arr,size);
    
    

    return 0;
}
