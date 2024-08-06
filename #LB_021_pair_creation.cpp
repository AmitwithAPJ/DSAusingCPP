#include <iostream>
using namespace std;
void pair_printing(int arr[],int size)
{
    int sum=0;   //summation variable created to stor sum values!!
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout << "(" << arr[i] << ", " << arr[j] << ")";
            sum=arr[i]+arr[j];
            cout << "- Pair Sum is: " << sum << endl;
        }
    }
}
int main()
{
    int arr[]={10,20,30};
    int size=3;
    pair_printing(arr,size);
    return 0;
}
