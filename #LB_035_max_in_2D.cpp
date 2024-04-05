#include <iostream>
#include <limits.h>
using namespace std;
int max_2D(int arr[][4],int rows, int cols)
{
    int ans=INT_MIN;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j]>ans)
            {
                ans=arr[i][j];
            }
        }
    }
    return ans;
}
int main()
{
int result;
int rows=4;
int cols=4;
int arr[][4]={
              {2,3,4,5},
              {12,13,14,15},
              {22,23,24,25}, 
              {32,33,34,35},
             };
result=max_2D(arr,rows,cols);
cout << "The Max result is: " << result;
return 0;    
}