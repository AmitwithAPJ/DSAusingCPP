#include <iostream>
using namespace std;
int summation_2D_diagonal(int arr[][5], int rows, int cols)
{
    int sum_diagonal=0;
    //Sum_diagonal is set to zero for  addition!
    for(int i=0;i<rows;i++)
    {
        for(int j=cols-(i+1);j<cols-i;j++)
        {
            sum_diagonal += arr[i][j];  //adding the diagonal element to the sum_diagonal variable!!
        }
    }
    return sum_diagonal;
}
int main()
{
    int arr[][5]={
                  {2,3,4,5,6},
                  {0,1,2,5,9},
                  {-2,5,9,0,3},
                  {9,8,7,6,9},
                  {100,200,300,400,500},
                 };
int rows=sizeof(arr)/sizeof(arr[0]);
int cols=sizeof(arr[0])/sizeof(arr[0][0]);
int result=summation_2D_diagonal(arr,rows,cols);
cout << "The Diagonal Element summation is: " << result;
    return 0;
}
