#include <iostream>
using namespace std;
class demo
{
  public:
   int x,y;   //declaration of x and y variables
   void printing()
   {
      cout << this->x << " " << this->y << endl;
   } 
};  
int main()
{
  demo D1={1,2};
  D1.printing();

    return 0;
} 
