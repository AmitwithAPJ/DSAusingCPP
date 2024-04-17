#include <iostream>
#include <vector>
using namespace std;
void selection_sort(vector<int>&arr)
{
    for(int i=0;i<arr.size()-1;i++)
    {
       // int temp=arr[i];
       int min_index=i;
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}
int main()
{
vector<int>arr={44,33,55,22,11};
selection_sort(arr);
for(int i=0;i<arr.size();i++)
{
    cout << arr[i] << " ";
}


    return 0;
}