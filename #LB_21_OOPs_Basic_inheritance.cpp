#include <iostream>
using namespace std;
class Bird 
{
   public:
    int age;
    int weight;
    string color;
    int nol;
   void fly()
   {
      cout << "Bird can fly !!" << endl;
   } 
   void eat()
   { 
      cout << "Birds can eat but they swallow only!!" << endl;
   }
};
class Pigeon:public Bird
{
   public:
    Pigeon(int _age, int _weight, string _color, int _nol)
    {
       age=_age;
       weight=_weight;
       color=_color;
       nol=_nol;
    }
    void guttering()
    {
       cout << "Pigeon loves Guttering on Home!!" << endl;
    }
};
class Sparrow: public Bird
{
  public:
   void grassing()
   {
      cout << "Sparrow do grassing a lot!!" << endl;
   }
};
int main()
{
  Pigeon P1(2,4,"Black",2);
  P1.eat();
  P1.guttering();
  cout << P1.age << endl;
  Sparrow S1;
  S1.eat();
  S1.grassing();



   return 0;
}