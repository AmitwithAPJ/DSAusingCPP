// Program to find max element in 2D array!!
#include <iostream>
using namespace std;
int max_2D(int arr[][5],int rows, int cols) //max_2D function created to find max element
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
int result=max_2D(arr,rows,cols);   //array, rows & cols are paased as argument in the max_2D function
cout << "The Max element is: " << result;
    return 0;
}
