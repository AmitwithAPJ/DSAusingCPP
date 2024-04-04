#include <iostream>
#include<vector>
using namespace std;
void D2_array(int arr[][4], int rows, int cols)
{
    for (int j=0;j<cols;j++)
    {
        for(int i=0;i<rows;i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
int arr[][4]={
              {2,3,4,5},
              {1,0,4,2},
              {9,8,7,6},
              {0,1,2,3}
            };
int rows=4;
int cols=4;
cout << "traversing the array!!" << endl;
D2_array(arr,rows,cols);
cout << "traversing ended!!" << endl;
    return 0;
}