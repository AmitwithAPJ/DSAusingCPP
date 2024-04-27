#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
bool is_prime(int n)
{
    int sqrt_n=sqrt(n);
    for(int i=2;i<=sqrt_n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
vector<int> check_prime(int num)
{
    vector<int>temp;
    for(int i=2;i<num;i++)
    {
        if(is_prime(i))
        {
            temp.push_back(i);
        }
    }
    return temp;
}
int main()
{
    int num;
    cout << "Enter the number: ";
    cin>> num;
    vector<int>result=check_prime(num);
    for(int i=0;i<result.size();i++)
    {
        cout << result[i] << " ";
    }




    return 0;
}