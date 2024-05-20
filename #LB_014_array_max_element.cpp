#include <iostream>
using namespace std;
#include <limits.h>   //header file for min & max value!!
int main ()
{
    int arr[10]={1,2,3,4,5,-1,100,-100,400,321};
    int size=10;
    int ans=arr[0];
    for (int i=1; i<size; i++)
    {
      ans=min(ans,arr[i]);
    }
    cout << "The Maximum is: " << ans;
    
    
    
    
    
    
    return 0;
}
