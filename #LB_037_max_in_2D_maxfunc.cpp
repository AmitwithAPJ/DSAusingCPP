#include <iostream>
using namespace std;
int max_2D(int arr[][5],int rows, int cols)
{
    int ans=arr[0][0];
    for (int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
           ans=max(ans,arr[i][j]);
        }
    }
    return ans;
}
int main()
{
    int arr[][5]={
                  {2,3,4,5,7},
                  {8,10,23,45,76},
                  {0,-2,34,56,90},
                 };
int rows=sizeof(arr)/sizeof(arr[0]);
int cols=sizeof(arr[0])/sizeof(arr[0][0]);
int result=max_2D(arr,rows,cols);
cout << "The Max element is: " << result;
    return 0;
}