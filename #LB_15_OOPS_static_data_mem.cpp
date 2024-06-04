#include <iostream>
using namespace std;
class data_mem
{
    public:
     static int x,y;  //for static data member, data should be in public!!
     void printing()
     {
        cout << x << " "<< y << endl;
     } 
};
int data_mem::x;  //setting static data member means declaration 
int data_mem::y;
int main()
{
    data_mem D1, D2;
    D1.x=10;
    D1.y=20;
    D1.printing();
    D2.y=11;
    D2.printing();
    data_mem D3;
    D3.x=11;
    D3.y=22;
    D3.printing();

    return 0;
}
