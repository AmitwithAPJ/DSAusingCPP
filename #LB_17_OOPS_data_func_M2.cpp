#include <iostream>
using namespace std;
class data_func
{
   private:
    static int x;
    static int y;
   public: 
    data_func(int _x, int _y)
    {
       x=_x;
       y=_y;
    } 
   static void printing()
   {
      cout << x << " " << y << endl;
   }
};
int data_func::x;
int data_func::y;
int main()
{
   data_func D1(1,2);
   data_func::printing();   
  

   return 0;
}