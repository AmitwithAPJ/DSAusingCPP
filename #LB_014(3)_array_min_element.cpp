#include <iostream>
using namespace std;
#include <limits.h>
int main ()
{
    int arr[10]={1,2,3,4,5,1,100,100,400,321};  
    //an array created of size "10"
    int size=10;
    int ans=INT_MAX;
    for (int i=0; i<size; i++)
    {
      if(arr[i]<ans)
        ans=arr[i];
    }
    cout << "The Maximum is: " << ans;
    return 0;
}
