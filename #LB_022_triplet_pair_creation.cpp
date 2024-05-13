#include <iostream>
using namespace std;
void triplet_printing(int arr[], int size)
{
    int sum=0;  //sum variable 
    for (int i=0;i<size;i++)
    {
        for(int j=0; j<size;j++)
        {
            for(int k=0;k<size;k++)
            {
                cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")";
                sum=arr[i]+arr[j]+arr[k];
                cout << "- Pair Sum is: " << sum << endl;
            }
        }
    }
}
int main ()
{
    int arr[]={10,20,30};
    int size=3;
    triplet_printing(arr,size);
    

    return 0;
}
