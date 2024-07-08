#include <iostream>
using namespace std;
int main ()
{
    int arr[6]={2,4,6,7,10,12}; //an array of size 6 created!!
    int size=6;
    int target=8;  //target set as 8
    int i=0;
    bool flag=0;
    int j=6;
    while(i<=j)
    {
        if(arr[i]==target||arr[j]==target)
        {
            flag=1;//
            break;
        }
        i++;
        j--;
    }
    if (flag==1)
    {
        cout << "Target Found!!";
    }
    else 
    {
        cout << "Target Not Found!!";
    }
    
    return 0;
}
