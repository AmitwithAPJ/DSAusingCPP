#include <iostream>
using namespace std;
void counting(int arr[], int size)
{
    int zero_count=0;   //initializing zero and one count variables
    int one_count=0;
    for (int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
           zero_count++;
        }   
        else if(arr[i]==1)
        {
           one_count++;
        }   
    }
    cout << "The One's are: " <<  one_count << endl;
    cout << "The Zero's are: " << zero_count;
}
int main ()
{
    int arr[6]={0,1,9,1,1,1};
    int size=6;
    counting(arr,size);
    
    
    return 0;
}
