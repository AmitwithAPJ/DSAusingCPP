#include <iostream>
using namespace std;
//sorting zeros and ones in an array!!
void sorting_array(int arr[], int size)
{
    int left=0;
    int right=size-1;
    while(left<=right) //equal wale case me error aa raha pata nhi kyu fix it!!!
    {
        if(arr[left]==0)
        {
           left++;   //increamenting the value of left!!
        }
        if(arr[left]==1)
        {
             swap(arr[left],arr[right]);    //swapping the left and right element
            right--;
        }
    }
}
int main()
{
    int arr[]={0,1,1,0,0,1,0,1,0,0,1};
    int size=11;  //size set to be 11 but subject to user's input
    sorting_array(arr,size);
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
