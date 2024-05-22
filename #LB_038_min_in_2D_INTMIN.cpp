#include <iostream>
#include <limits.h>
using namespace std;
int min_2D(int arr[][3],int rows, int cols)
{
    int min=INT_MAX;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j]<min)
            {
                min=arr[i][j];    //minimum set to arr[i]
            }
        }
    }
    return min;
}
int main ()
{
    int arr[][3]={
                  {2,3,4},
                  {-2,0,1},
                 };
int rows=sizeof(arr)/sizeof(arr[0]);
int cols=sizeof(arr[0])/sizeof(arr[0][0]);
int result=min_2D(arr,rows,cols);
cout << "The Minimum Element is: " << result;
    return 0;
}
