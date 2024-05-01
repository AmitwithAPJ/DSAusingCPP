#include <iostream>
using namespace std;
#define MAXX(x,y) (x>y?x:y)
void func()
{
  int x=50;
  int y=30;
  int result=MAXX(x,y);
  cout << "The Max result is: " << result << endl;
}
int main()
{
func();



    return 0;
}