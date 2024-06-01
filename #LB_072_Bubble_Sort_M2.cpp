#include <iostream>
using namespace std;
#include <vector>//
void Bubble_sort_M2(vector<int>&arr)
{
    int start=0;
    int end=arr.size()-1;
     while(start<=end) 
     {
        if(arr[start]>=arr[end])
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        else if(arr[start]<arr[end])
        {
            end--;
        }
     }
}

int main()
{
    vector<int>arr={2,3,-2,0,1,8};
    Bubble_sort_M2(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}
