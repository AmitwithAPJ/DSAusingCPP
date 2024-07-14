#include <iostream>
#include <algorithm> //for sorting 
using namespace std;
#include <vector>
void printing(vector<int>arr)  //printing function created!!
{
    for(int i=0;i<arr.size();i++)
    {
        cout << arr[i] << " ";
    }
}
bool mycomp(int &a, int &b)
{
    return a>b;
}
int main()
{
vector<int>arr={55,33,22,11,44};
sort(arr.begin(),arr.end(),mycomp);
printing(arr);
return 0;
}
