#include<iostream>
using namespace std;
bool searching_2D(int arr[][4],int rows,int cols, int target)
{
    bool flag=false;    //setting flag value!!
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j]==target)
            {
                flag=true;
                break;
            }
        }
    }
    return flag;
}
int main()
{
    int rows=2;
    int cols=2;
    int target=9;
    int arr[][4]={       //edge cases example are taken (3x3, 4x4 can also be taken)!!!
                  {0,1},
                  {4,5},
                 };
    if(searching_2D(arr,rows,cols,target))
    {
        cout << "Target Found!!";
    }
    else
    {
        cout << "Target not Found!!";
    }
    return 0;
}
