#include<iostream>
using namespace std;
int main ()
{
    int arr[7]={2,4,6,8,10,0,12};
    int size=6;// the size of the array given or you can calculate by your own!!!
    for (int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Updating!!" << endl;
    for (int i=0;i<size/2;i++)
    {
        swap(arr[i],arr[size-i-1]);
    }
    cout << "Answer finded!!" << endl;
    for (int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
