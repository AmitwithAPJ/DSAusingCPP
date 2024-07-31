#include <iostream>
using namespace std;
void swapping(int arr[], int index1, int index2) //swapping function!!
{
    arr[index1]=(arr[index1]^arr[index2]);
    arr[index2]=arr[index1]^arr[index2];
    arr[index1]=arr[index1]^arr[index2];
}
int main ()
{
   int size=5;
   int arr[5]={1,2,3,4,5};
   swapping(arr,1,3);
   for(int i=0; i<size; i++)
   {
       cout << arr[i] << " ";
   }
    
    
    
    
    return 0;
}
