#include <iostream>
using namespace std;
double square_root(int number)
{
    double ans=0;   //ans variable to store the value!!
    for(double temp=number; temp>0; temp=temp-0.002)
    {
        if((temp/2)*(temp/2)==number)
        {
            ans=temp;   //ans have the temp which will store value in after checking the conditions!!
            return temp/2;
        }
        else if(number-(temp*temp)>=0.001)
        {
            return temp;
        }
    }
    return ans;
}
int main()
{
    int number;
    cout << "Enter the Number: ";
    cin >> number;
    double result=square_root(number);
    result=(static_cast<int>((result*100)+0.5))/100.0;
    cout << "The Square root is: " << result << endl;



    return 0;
}
