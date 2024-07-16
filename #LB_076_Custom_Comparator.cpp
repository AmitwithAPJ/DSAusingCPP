#include <iostream>
#include <algorithm> // for sort ke liye (need to applied for better)
#include <vector>
using namespace std;
void printing(vector<vector<int>>&arr)
{
    for(int i=0;i<arr.size();i++)
    {
        vector<int>&temp=arr[i];
        int a=temp[0];
        int b=temp[1];
        cout << a << " " << b << endl;
    }
}
bool mycomp2nd(vector<int>&a, vector<int>&b)  //mycomp2nd to cutsomly do the sorting!!
{
    return a[0]>b[0];   //returning the custom sorted elemented
}
int main()
{
    vector<vector<int>>arr;
    for(int i=0;i<5;i++)
    {
        vector<int>temp;
        int num1, num2;
        cout << "Enter the Number: ";
        cin >> num1 >> num2;
        temp.push_back(num1);
        temp.push_back(num2);
        arr.push_back(temp);
    }
    printing(arr);
    cout << "Sorting the Array!!" << endl;
    sort(arr.begin(),arr.end(), mycomp2nd);
    printing(arr);
    return 0;
}
