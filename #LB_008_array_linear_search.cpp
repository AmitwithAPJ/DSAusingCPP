//program to find a target in an array through linear seach
#include<iostream>
using namespace std;
int main ()
{
    int arr[]={2,4,6,8,10,12};
    int size=6;
    int target=8;   //target to be finded in the array!!
    bool flag=0;    //flag variable created to check whether target is found or not!!
    for(int i=0; i<size; i++)
    {
        if(arr[i]==target)
        {
            break;
            flag=1;   //flag value set to 1 if target found(however, 1 means true)
        }
    }
    if(flag==1)
    {
        cout << "The Target Found: ";
    }
    else 
    {
        cout << "The Target not found!!";
    }
    
    
    
    
    return 0;
}
