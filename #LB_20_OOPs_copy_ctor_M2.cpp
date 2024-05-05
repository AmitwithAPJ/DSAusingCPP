#include <iostream>
using namespace std;
class Student
{
   private:
    int mobile_no;
   public:
    int class_no;
    string name;
    bool attendance;
    int nos;
    Student(int _mobile_no, int _class_no, string _name, bool _attendence, int _nos)
    {
       mobile_no=_mobile_no;
       class_no=_class_no;
       name=_name;
       attendance=_attendence;
       nos=_nos;
       cout << "Ctor called!!" << endl;
    } 
   Student(const Student &S1)
   {
       mobile_no=S1.mobile_no;
       class_no=S1.class_no;
       name=S1.name;
       attendance=S1.attendance;
       nos=S1.nos;
       cout << "Copy Ctor Called!!" << endl;
   }
};
int main()
{
   Student S1(342,2,"Kaaju",1,5);
   Student S2=S1;
  /* {
       Student S2(); 
       S2=S1;     //cannot directly copy object data to another non-class type Student S2() 
                  //as S2 is treated as function here
   } */

  

   cout << S2.name << endl;
   cout << S1.name << endl;


   return 0;
}