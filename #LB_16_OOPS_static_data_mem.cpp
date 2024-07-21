#include <iostream>
using namespace std;
class data_mem//
{
   public: 
   static int x;
    static int y;
   data_mem(int _x, int _y)  //can't do initialiszation list here with static data members
   {
      x=_x;
      y=_y;
      cout << "Ctor Called!!" << endl;
   }
   void printing() const
   {
      cout << x << " " << y << endl;
   }
};
void print(const data_mem &D1)
{
   cout << D1.x << " "<< D1.y << endl;
}
int data_mem::x;
int data_mem::y;
int main()
{
  data_mem D1(1,2);
  D1.printing();
  print(D1);
  

   return 0;
}
