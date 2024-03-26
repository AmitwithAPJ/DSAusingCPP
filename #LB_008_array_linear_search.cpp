#include<iostream>
using namespace std;
int main ()
{
    int arr[]={2,4,6,8,10,12};
    int size=6;
    int target=8;
    bool flag=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==target)
        {
            break;
            flag=1;
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