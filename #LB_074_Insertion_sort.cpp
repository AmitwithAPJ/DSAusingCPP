#include <iostream>
#include <vector>
using namespace std;
void insertion_sort(vector<int>&arr)  //function created
{
    for(int i=1;i<arr.size();i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main()
{
    vector<int>arr={5,4,3,2,1};
    insertion_sort(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout << arr[i] << " ";
    }



    return 0;
}
