#include <iostream>
using namespace std;
class data_func
{
    public:
     int x, y;
     data_func(): x(0),y(0){}
    static void printing()    //no instances passed to the functions!!
    {
       cout << x << " " << y << endl; //means you can directly access the variables as 
    //"this" pointer is applicable in static data function
     }
};
int main()
{
    data_func D1;
    data_func::printing();
    return 0;
}

// correct to access
   static void printing(const data_func &D1)
{
   cout << D1.x << " " << D1.y << endl;
}
//and
// data function::printing(D1);
