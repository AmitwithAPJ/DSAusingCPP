#include <iostream>
using namespace std;
void summation_2Darray(int arr[][4], int rows, int cols)
{
    int sum_rows=0;  //sum rows variable created and initialised
    int sum_cols=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
           sum_rows=sum_rows+arr[i][j];  //sum_rows variable storing!!
        }
        cout << "The Row" << i << " is: " << sum_rows << endl;
        sum_rows=0;
    }
    for(int i=0;i<cols;i++)
    {
        for(int j=0;j<rows;j++)
        {
           sum_cols=sum_cols+arr[j][i];
        }
        cout << "The Cols" << i << " is: " << sum_cols << endl;
        sum_cols=0;
    }
}
int main()
{
int arr[][4]={
              {2,3,4,5},
              {-2,0,1,2},
              {2000,300,40,50},
             };    
int rows=sizeof(arr)/sizeof(arr[0]);
int cols=sizeof(arr[0])/sizeof(arr[0][0]);
summation_2Darray(arr,rows,cols);
    return 0;
}
