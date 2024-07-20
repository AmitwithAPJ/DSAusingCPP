#include <iostream>
using namespace std;
class data_func //class created and named as "data_func"
{
   private:
    int x, y;
   public: 
    data_func(int _x, int _y)
    {
       x=_x;
       y=_y;
    } 
    static void printing(const data_func &D1)
    {
       cout << D1.x << " " << D1.y << endl;
    }
};
int main()
{
   data_func D1(2,1);
   data_func::printing(D1);





   return 0;
}
