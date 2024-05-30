#include <iostream>
#include <vector>
using namespace std;
bool BS_2D(vector<vector<int>>&matrix, int size, int target, int column)
{
    int start=0; //sstart variable initialized!!
    int end=size-1;
    while(start<=end)
    {
       int mid=start+(end-start)/2;
       int row_position=mid/column;
       int column_position=mid%column;
       if(matrix[row_position][column_position]==target)
       {
         return true;
       }
       else if(target>matrix[row_position][column_position])
       {
         start=mid+1;
       }
       else
       {
         end=mid-1;
       }
    }
    return false;
}
int main()
{
    vector<vector<int>>matrix={ 
                               {2,4,6,8,7},
                               {10,12,14,16,17},
                               {18,20,22,24,26},
                              };
    int size=matrix.size()*matrix[0].size();
    int target=0;
    int column=matrix[0].size();
    // int result=BS_2D
    // int row_target=result/column;
    // int col_target=result%column;
    if(BS_2D(matrix,size,target,column)){
    cout << "The Target Found";
    }
    else 
    {
        cout << "Target Not Found!!";
    }




    return 0;
}
