#include <iostream>
using namespace std;
class Student 
{
    private:
      int mobile_no;
    public:
      int id;
      int sect;
      int class1;
      string name;
      int present;  
    Student(int _id, int _sect, int _class1, string _name, int _present)
    {
        id=_id;
        sect=_sect;
        class1=_class1;
        name=_name;
        present=_present;
        cout << "Parametrized Ctor" << endl;
    }
    Student(int _sect, string _name, int _id, int _class1, int _present)
    {
        sect=_sect;
        name=_name;
        id=_id;
        class1=_class1;
        present=_present;
          cout << "Parametrized 2 Ctor" << endl;
    }
};
int main()
{
    Student S1(2,3,5,"Amit",0);
    Student S2(2,"Amit",3,1,1);  //complier automatically know which student I am taking about !!
    cout << S1.name << endl;
    cout << S2.name << endl;
    cout << Student S1::present << endl;  //not correct as we don't have any static data memeber in the code



    return 0;
}