#include <iostream>
using namespace std;
int searching(int arr[], int size, int target)
{
    bool flag=0;
    for (int i=0; i<size;i++)
    {
        if (arr[i]==target)
        {
            flag=1;   //setting the value of flag as true!!
            break;
        }
    }

    return flag;    //returinng the vlaue of flag!!   
}
int main ()
{
    int arr[6]={3,4,-1,2,6,0};   //array of size 6 created
    int size=6;
    int target=-1;             //setting the target as 1
 int bool_ans=searching(arr,size,target);    //passed the argument  in the bool_ans
 if (bool_ans==1)             //checking the conditions thorugh "if" conditional statement
 {
     cout << "Target Found!!";    
 }
 else
 {
     cout << "target not found!!";
 }
    
    
    return 0;
}
