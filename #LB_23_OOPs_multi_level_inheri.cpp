#include <iostream>
using namespace std;
class Fruit {
public:
    int picked;//
    int weight;
    string color;
    bool sweetness;
    void taste() {
        cout << "Fruits are very tasty:)" << endl;
    }
};

class Mango: private Fruit
{
  public:
   bool riped;
   bool desi;
   Mango(int _picked, int _weight, string _color, bool _sweetness, bool _riped, bool _desi): 
   Fruit{_picked,_weight,_color, _sweetness}, riped(_riped), desi(_desi)
   {
      /* picked=_picked;
       weight=_weight;
       color=_color;
       sweetness=_sweetness;
       riped=_riped;
       desi=_desi; */
   }
   void sweet()
   {
      cout << "Mangoes are very sweet!!" << endl;
   }
};
class Dashari: private Mango
{
   public:
   Dashari(int _picked, int _weight, string _color, bool _sweetness,bool _riped, bool _desi): 
   Mango( _picked,  _weight,  _color,  _sweetness, _riped, _desi)
    {
     
    }
    void juice()
    {
       cout << "Dashari mangoes are very juicy!!" << endl;
    }
};
int main()
{
   Mango M1(23,1,"Green",1,0,0);
  // cout << M1.color << endl;
 //  M1.taste();          //cannot access bcoz we cannot use method outsie the private class 
                        //mango is private so it will inherit everthing privately therefore I can 
                        //access only access the things of mango only not others.
   M1.sweet();
  Dashari D1(21,2,"Yelolow",0,1,1);
  // cout << D1.riped << endl;
//cout << D1.color << endl;
//   D1.sweet();
   D1.juice();




   return 0;
}
