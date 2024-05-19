#include <iostream>
using namespace std;
class Abc
{
    private:
     int x;
     int y;
     int z;
    public:
     Abc(int _x, int _y, int _z=0)
     {
         x=_x;  //
         y=_y;  //
         x=_z;  //
         cout <<"para ctor called!!" << endl;
     } 
     int getX() const  //passing const for const Abc below
     {
        return x;  //returning the value of x!!
     }
     void setX(int _value)
     {
        x=_value;  //
     }
      int getY() const   // same as above wala
     {
        return y;
     }
     void setY(int _value)
     {
        y=_value;
     }
};
void printing(const Abc &a)  //const Abc &a is passed so that the instance of class Abc can't be modified
     {
        cout << a.getX() << " " << a.getY() << endl;
     }
int main()
{
    Abc a(1,2);
    printing(a);

    return 0;
}
