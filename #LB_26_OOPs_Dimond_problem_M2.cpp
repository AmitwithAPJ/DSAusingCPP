#include <iostream>
using namespace std;
class Person{    //class Person created
   public:
    int age;
    float height; //storing the values
    Person(int _age, float _height): age{_age}, height{_height}
    {}
   void walk()
   {
      cout << "Person walk a lot!!" << endl;
   } 
};
class Teacher: virtual public Person{
   public:
    int experience;
    bool female;
    Teacher(int _age, float _height, int _experience, bool _female): Person{_age, _height},
    experience{_experience}, female{_female}
    {}
   void teach()
   {
      cout << "Teacher teah poorly!!" << endl;
   } 
};
class Researcher: virtual public Person{
   public:
    bool lab;
    bool working_project;
    Researcher(int _age, float _height, bool _lab, bool _working_project): 
    Person{_age, _height}, lab{_lab}, working_project{_working_project}
    {}
   void research()
   {
      cout << "Researchers plays a crucial role science development!!" << endl;
   }
};
class Professor:public Teacher, public Researcher
{
   public:
    bool dean;
    int no_of_class;
   Professor(int _age, float _height, int _experience, bool _female, bool _lab, bool _working_project, 
   bool _dean, int _no_of_class): Person(_age,_height),
   Teacher{_age, _height, _experience, _female}, Researcher{_age, _height, _lab, _working_project}, 
   dean{_dean}, no_of_class{_no_of_class}
   {} 
   void bore()
   {
       cout << "Professor bores a lot!!" << endl;
   }
};
int main()
{
   Person P1(33,3.5);
   cout << P1.age << endl;
   Teacher T1(21,5.8,4,1);
   cout << T1.age << endl;
   cout << T1.female << endl;
   T1.teach();
   T1.walk();
   Researcher R1(35,5.2,1,1);
   cout <<  R1.age << endl;
   cout << R1.working_project << endl;
   R1.research();
   R1.walk();
   Professor P2(44,5.1,9,0,1,0,1,5);
   cout << P2.age << endl;
   cout << P2.female << endl;
   cout << P2.working_project << endl;
   cout << P2.dean << endl;
   P2.walk();
   P2.teach();
   P2.research();
   P2.bore();



   return 0;
}
