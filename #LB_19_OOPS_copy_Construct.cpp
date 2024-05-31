#include <iostream>
using namespace std;
class Student
{
   private:
    int mobile_no;  //private data member
   public:
    int roll_no;
    int class1;
    string name;
    bool present;
   Student(int _roll_no, int _class1, string _name, bool _present)
   {
        this->roll_no=_roll_no;
        this->class1=_class1;
        this->name=_name;
        this->present=_present;
        cout << "Ctor called!!" << endl;
   }  
   void playing()
   {
      cout << "Idiots are playing!!" << endl;
   }
};
int main()
{
   Student S1(11,7,"Amit",0);
   Student S2=S1;
   cout << S1.name << endl;
   cout << S2.name << endl;




   return 0;
}
