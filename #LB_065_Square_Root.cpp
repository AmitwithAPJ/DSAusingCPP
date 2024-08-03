#include <iostream>
#include <iomanip>
using namespace std;
double square_root(int number)
{
    double start=0;
    double ans=-1;
    double end=number;
    double precision=0.001; 
    // very important aspect;
    while(end-start>precision)
    {
        double mid=start+(end-start)/2;
        if(mid*mid==number)   //condition to check the number 
        {
            
            return mid;
        }
        else if(mid*mid>number)
        {
            end=mid;
        }
        else if(mid*mid<number)
        {
            ans=mid;
            start=mid;
        }
    }
    //ans=static_cast<int>(ans*1000+0.5)/1000.0;
    return ans;
    
}
int main()
{
    int number;
    cout << "Enter The Number of Which You Want o Find Square Root: ";
    cin >> number;
    double result=square_root(number);
    cout << "The Square root of " << number  << " is: " << fixed << setprecision(3) << result;



    return 0;
}
