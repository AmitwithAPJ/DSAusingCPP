#include <iostream>
using namespace std;
class Abc
{
  private:
   int x;
   int *y; //dynamic memory allocation(Heap)
   int z;
  public:
   Abc(int _x, int _y, int _z=0)
   {
      x=_x;
      y=new int(_y);
      z=_z;
   } 
   int getX() const
   {
      return x;
   }
   void setX(int _value)
   {
      x=_value;
   }
   int getY() const
   {
      return *y;
   }
   void setY(int _value)
   {
     *y=_value;
   }
};
void printabc(const Abc &a)
{
    cout << a.getX() << endl;
    cout << a.getY() << endl;
}
int main()
{
    Abc a(1,2);
    printabc(a);
    return 0;
}    
