#include <iostream>
using namespace std;
void basic_array(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout << "Enter the Element: ";
        cin >> arr[i];
    }
}
int main ()
{
    int arr[5];
    int size=5;
    basic_array(arr,size);
    return 0;
}