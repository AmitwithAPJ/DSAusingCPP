#include <iostream>
using namespace std;
//right shifting by 1 position in an array
//you can also use extra array method but it will take extra memory space that's why didn't preferred.
void shifting_array(int arr[], int size)
{
    int temp=arr[0];
    for(int i=0;i<size-1;i++)
    {
        arr[i]=arr[i+1]; //store the coming adjacent element in the curreent position
    }
    arr[size-1]=temp;
}
int main ()
{
    int arr[]={10,20,30,40,50,60};
    int size=6;
    shifting_array(arr,size);
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}