#include <iostream>
using namespace std;
class Student
{
 public:
   int id;
   int class1;
   int roll_no;
   string *name;
   int present;
   Student(int _id, int _class1, int _roll_no, const string &_name, int _present)
   {
     this-> id= _id;
      this-> class1= _class1;
      this-> roll_no= _roll_no;
     this-> name= new string(_name);
      this-> present= _present;
   }
   void display()
   {
      cout << id << " " << class1 << " " << roll_no
      << " " << *name << " " << present;
   }
   ~Student()
   {
      delete name;
   }

};
int main()
{
    Student S1(22,1,67,"Amit",0);
    cout << *S1.name << endl;
    S1.display();
    Student *S2= new Student(33,2,123,"John",1);
    cout << endl;
    cout << *S2->name << endl;   //access name using dereference to get the member function
     S2->display();
   delete S2;



    return 0;
}