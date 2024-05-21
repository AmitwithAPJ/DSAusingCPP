#include <iostream>
using namespace std;
class Student
{
  private:
      int mobile_no;
  public:
    //Data Members Created
    int roll_no;
    int class_no;
    bool present;
    string name;

    //default Constructor    
    /*Student()
    {
       cout << sizeof(Student) << endl;   
    }
    */
 
     //Member Function Created
    void playing()
    {
    cout << "Hello Guys!! I am playing" << endl;
    }
    void studying()
    {
    cout << "Hello Everyone, I am Stuyding, are you?" << endl;
    }

};
int main()
{
    Student S1;
    Student S2;
   // cout << sizeof(Student) << endl;
    Student();  // This is giving three 40 bcoz Student is a function means constructor
    //Student() after getting called twice it runs one more time to as temporary constructor call



    return 0;
}
