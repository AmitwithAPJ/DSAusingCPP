#include <iostream>
using namespace std;
class Animal  //Parent class created of name "Animal"
{
   public:
     int age;
     int weight;
     string color;
     int legs;
     bool tail;
    void run()
    {
      cout << "They Can un fastly!!" << endl;
    }
    void eat()
    {
       cout << "They eat a lot!!" << endl;
    }
};
class Dog:private Animal
{ 
   public:
    Dog(int _age, int _weight, string _color, int _legs, bool _tail): 
    Animal{_age, _weight, _color, _legs, _tail}
    {
     /* age=_age;
      weight=_weight;
      color=_color;
      legs=_legs;
      tail=_tail; */
    }
    void barking()
    {
      cout << "Dogs barks a lot!! " << endl;
    }
};
int main()
{
  Dog D1(2,20,"Brown",4,1);
  D1.barking();
//cout << D1.color << endl;



   return 0;
}
