#include <iostream>
#include <string>
using namespace std;
class Person   ///
{
   public:
    int age;
    int weight;
    int height;
    string color;
    void walk()
    {
       cout << "Person is walking!!" << endl;
    }
};
class Teacher: virtual public Person
{
   public:
     bool gender;
     int experience;
    Teacher(int _age, int _weight, int _height, string _color, bool _gender, int _experience):
    Person{_age, _weight, _height, _color}, gender(_gender), experience(_experience)
    {}
    void teach() {
    cout << "Teacher teach very bad!!" << endl;
    }
};
class Reseacher: virtual public Person
{
   public:
    bool newly;
   Reseacher(int _age, int _weight, int _height, string _color, bool _newly):
   Person{_age, _weight, _height, _color}, newly{_newly}
   {}
   void study()
   {
       cout << "Researchers do research work a lot!!" << endl;
   }
};
class Professor: public Teacher, public Reseacher
{
   public:
    bool hair;
    Professor(int _age, int _weight, int _height, string _color, bool _gender, int _experience, bool _newly, bool _hair):
    Teacher{_age, _weight, _height, _color, _gender, _experience}, 
    Reseacher{_age, _weight, _height, _color, _newly}, hair(_hair)
    {}
    void bore()
    {
       cout << "Professors are very boring entity!!"<< endl;
    }
};
int main()
{
Teacher T1(12, 23,5,"Brown",1,5);
  T1.walk();
  T1.teach();
  cout << T1.color << endl;
  Reseacher R1(8,44,6,"Black",1);
  R1.walk();
  R1.study();
  cout << R1.color << endl;
  Professor P1(23,33,4,"Pale",1,7,0,1);
  P1.walk();
  cout << P1.color << endl;
  P1.bore();

   return 0;
}
