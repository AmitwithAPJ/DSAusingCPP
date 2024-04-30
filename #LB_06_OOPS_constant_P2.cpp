#include <iostream>
using namespace std;
class Abc
{
  int x;
  int *y;
  public:
    Abc()
    {
        x=0;
       
     // *y=2;    putting the value to the memory assign by y which actualli haven't done;
     y=new int(2);  //actual memoery assigned here!!
    }
    int getX(){
        x=50;
        return x;
    }
    void setX(int _value)
    {
        x=_value;
    }
    int getY()
        {
            return *y;
        }
    void setY(int _value)
    {
        *y=_value;
    }    
};
int main()
{
    Abc a;
    cout << a.getX() << endl;
    cout << a.getY() << endl;

    return 0;
}