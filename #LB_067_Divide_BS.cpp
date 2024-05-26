#include <iostream>
using namespace std;
#include <iomanip>
double Divide_BS(int Dividend, int Divisor)
{
    double start=0;
    double ans=-1;
    double end=Dividend;
    double precision=0.01;
    while(end-start>precision)
    {
        double mid=start+(end-start)/2;
        if(mid*Divisor==Dividend)
        {
            return mid; //
        }
        else if(mid*Divisor>Dividend)
        {
            end=mid;
        }
        else
        {
            ans=mid;
            start=mid;
        }
    }
    ans=int(ans*100+0.5)/100.0;
    return ans;

}
int main()
{
    int Dividend=29;
    int Divisor=7;
    double result=Divide_BS(Dividend,Divisor);
    //cout << "The Answer is: " << fixed << setprecision(2) << result;
    cout << "The Answer is: " << result;




    return 0;
}
