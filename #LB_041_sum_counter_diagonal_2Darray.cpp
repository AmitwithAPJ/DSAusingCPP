#include <iostream>
using namespace std;
int summation_2D_diagonal(int arr[][5],int rows, int cols)
{
    int sum_diagonal=0;   //initializing the value!! 
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(i==j)    //checking the condition
            {
            sum_diagonal += arr[i][j];   //addition of diagonal element in sum_diagonal variable!!
            }
        }
    }
    return sum_diagonal;
}
int main()
{
    int arr[][5]={                  //created 2D array for the matrix 
                  {2,3,4,5,6},
                  {0,1,2,5,9},
                  {-2,5,9,0,3},
                  {9,8,7,6,9},
                  {100,200,300,400,500},
                 };
int rows=sizeof(arr)/sizeof(arr[0]);   //getting row size by sizeof fucntion!!
int cols=sizeof(arr[0])/sizeof(arr[0][0]); //getting column size by sizeof function!!
int result=summation_2D_diagonal(arr,rows,cols);   //passing arguments to the function!!
cout << "The Diagonal Element summation is: " << result;  
    return 0;
}
