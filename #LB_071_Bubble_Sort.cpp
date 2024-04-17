#include <iostream>
#include <vector>
using namespace std;
void Bubble_sort(vector<int>&arr)
{
    for(int i=0;i<arr.size()-1;i++)
    {
        for(int j=0;j<arr.size()-(i+1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    vector<int>arr={2,0,-2,1,6,9,3,2};
    Bubble_sort(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout << arr[i] << " ";
    }




    return 0;
}