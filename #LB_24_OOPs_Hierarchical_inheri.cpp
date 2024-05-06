#include <iostream>
using namespace std;
class Animal
{
   public:
    int age;
    int weight;
    int nol;
    string color;
    void eat()
    {
      cout << "Animals are eating!!" << endl;
    } 
};
class Dog: public Animal
{
   public:
    bool bark;
    bool tail;
    Dog(int _age, int _weight, int _nol, string _color, bool _bark, bool _tail): 
    Animal{_age, _weight, _nol, _color}, bark{_bark}, tail{_tail}
    {}
    void barkSound()
    {
       cout << "Dogs barks a lot !!" << endl;
    }
};
class German: public Dog
{
   public:
   German(int _age, int _weight, int _nol, string _color, bool _bark, bool _tail): 
   Dog{_age, _weight, _nol, _color, _bark, _tail}
   {}
   void attack()
   {
      cout << "German Shepherd are very attacking dog breed!!" << endl;
   }
};
class Desi: public Dog
{
   public:
    Desi(int _age, int _weight, int _nol, string _color, bool _bark, bool _tail): 
    Dog {_age, _weight, _nol, _color, _bark, _tail}
    {}
    void immune()
    {
       cout << "Desi dog breeds are very immune and they are very adaptable!!" << endl;
    }
};
class Cat: public Animal
{
    public:
    bool hair;
    bool mushtache;
    Cat(int _age, int _weight, int _nol, string _color, bool _hair, bool _mushtache): 
    Animal{_age, _weight, _nol, _color}, hair{_hair}, mushtache{_mushtache}
    {}
    void meow()
    {
       cout << "Dogs meow a lot !!" << endl;
    }
    
};
class Persian: public Cat
{
   public:
   Persian(int _age, int _weight, int _nol, string _color, bool _hair, bool _mushtache): 
   Cat{_age, _weight, _nol, _color, _hair, _mushtache}
   {}
   void non_veg()
   {
      cout << "Persian cat are non-beg!!" << endl;
   }
};
int main()
{
   Dog D1(2,12,4,"Black",0,0);
   D1.eat();
   D1.barkSound();
   cout << D1.color << endl;
 //  German G1(1,11,3,"Brown",1,1);
 // G1.eat();
 //  G1.bark();
 //  G1.attack();
  // cout << G1.color << endl;
//  Desi D1(1,8,4,"White",1,0);
  // D1.eat();
  // D1.bark();
  // D1.attack();
  // D1.immune();
   //cout << D1.color << endl;


   return 0;
}