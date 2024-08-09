#include <iostream>
using namespace std;
void missing_element(int arr[], int size, int total_num)
{
    for(int i=0;i<total_num;i++)
    {
        bool flag=false;
        for(int j=0;j<size;j++)
        {
            if(i==arr[j])
            {
                flag=true;  //
                break;
            }
        }
        if(flag==false)
        {
            cout << "The Missing Element is: " << i << endl;
        }
    }
}
int main ()
{
 int arr[]={2,0,1,4,5,6,7};   
 int size=sizeof(arr)/sizeof(arr[0]);
 int total_num=7;
 missing_element(arr,size,total_num);  
    
    
    return 0;
}
