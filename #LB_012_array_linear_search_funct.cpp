#include <iostream>
using namespace std;
int searching(int arr[], int size, int target)
{
    bool flag=0;
    for (int i=0; i<size;i++)
    {
        if (arr[i]==target)
        {
            flag=1;
            break;
        }
    }

    return flag;
}
int main ()
{
    int arr[6]={3,4,-1,2,6,0};
    int size=6;
    int target=-1;
 int bool_ans=searching(arr,size,target);
 if (bool_ans==1)
 {
     cout << "Target Found!!";
 }
 else
 {
     cout << "target not found!!";
 }
    
    
    return 0;
}