#include <iostream>
#include <string>
using namespace std;
class Student   //class name -> Student
{
 private:
   int mobile_no;
 public:
   int class1;
   int roll_no;
   int nos;
   string name;
   bool present;
 Student(int _class, int _roll_no, int _nos, string _name, bool _present, int _mobile_no)   
 {
  //class data members initialization
      class1 = _class;
      roll_no= _roll_no;
      nos= _nos;
      name= _name;
      present = _present; 
      mobile_no= _mobile_no;
      cout << "I am Learning!!" << endl;
 }
 void printing()
 {
    cout << "Printing is Printing Nothing Else!!" << endl;
 }
};
int main()
{
   Student S2();  //S2 not a object, it is function with no arguments passed!!  
    Student S1(3,56,3,"Amit",0,85);
    Student S3(2,5,8,"Gaurav",1,03);
   // S2();
   cout << S1.name << endl;
 //  cout << S3.mobile_no << endl;   //cannot do that bcoz mobile_no is private so can'y access them!!
   cout << S3.class1 << endl;
   


    return 0;
}
