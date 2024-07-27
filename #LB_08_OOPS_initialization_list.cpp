#include <iostream>
using namespace std;
class Abc
{
    private:
     int x;
     int *y;  //dynamic variable
     const int z=10;
    public:
     Abc(int _x, int _y, int _z=10): x(_x), y(new int(_y)), z(_z)
     { 
        //x=_x; //can be done by it will failed for z as it is const
       cout << "Using the Initailization list!!" << endl;
      // z=10;    //cannot do that bcoz of const
      cout << z << endl;
     }
     int setX()
     {
        return x;
     }
     ~Abc()
     {
         delete y;  //deleting the dynamic memory using destructor
     }
};

int main()
{
    Abc a(1,2,3);
    cout << a.setX() << endl;




    return 0;
}
