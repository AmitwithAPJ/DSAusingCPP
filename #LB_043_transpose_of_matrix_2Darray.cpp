#include <iostream>
using namespace std;
void transpose_2D(int arr[][4], int rows, int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=i;j<cols;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
}
int main()
{
int arr[][4]={
              {2,3,4,5},
              {0,1,2,3},
              {9,8,7,6},
              {-2,4,0,6},
             };
int rows=sizeof(arr)/sizeof(arr[0]);
int cols=sizeof(arr[0])/sizeof(arr[0][0]);
cout << "Transposing The Matrix!!" << endl;
transpose_2D(arr,rows,cols);
cout << "Transpose Ended!!" << endl;
cout << "Transposed Matrix Below!!" << endl;
for(int i=0;i<rows;i++)
{
    for(int j=0;j<cols;j++)
    {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}

    return 0;
}