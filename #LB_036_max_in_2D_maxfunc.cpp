#include <iostream>
using namespace std;
int max_2D(int arr[][3],int rows, int cols)
{
    int temp=arr[0][0];   //temp variable created to store the number!!
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j]>temp)
            {
                temp=arr[i][j];
            }
        }
    }
    return temp;
}
int main()
{
int arr[][3]={
              {2,3,4},
              {10,-2,30},
             };
int rows = sizeof(arr) / sizeof(arr[0]); // Calculate number of rows
int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
int result=max_2D(arr,rows,cols);
cout << "The Max element is: " << result << endl;
    return 0;
}
