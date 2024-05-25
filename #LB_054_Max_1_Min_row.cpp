#include<iostream>
using namespace std;
#include<vector>
void max_element(int arr[][4], int rows, int cols)
{
    vector<int>brr;
    for(int i=0;i<rows;i++)
    {
        int count=0;
        for(int j=0;j<cols;j++)
       {
          if(arr[i][j]==1)
          {
              count++;
          }
       }
       brr.push_back(count);
    }
    int temp=brr[0];
    int row_no;
    for(int i=1;i<brr.size();i++)
    {
        if(brr[i]>temp)
        {
            temp=brr[i];
            row_no=i;
        }
        if(temp==brr[i-1])
        {
            row_no=min(row_no,i); //storing the value!!
        }
    }
    cout << "The Total One Element is: " << temp << " in row: " << row_no;
}
int main ()
{
    int arr[][4]={
                  {1,0,0,0},
                  {0,1,1,0},
                  {0,1,1,0},
                  {0,1,1,0},
                  {0,0,1,0},
                };
    int rows=sizeof(arr)/sizeof(arr[0]);
    int cols=sizeof(arr[0])/sizeof(arr[0][0]);
    max_element(arr,rows,cols);
    
    return 0;
}
