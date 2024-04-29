#include <iostream>
#include <string>
using namespace std;
class Student
{
     private:
        int mobile_no;
     public:
     //Data Memebers/Attributes/Properties
         int id;
         int roll_no;
         string name;
         int class_no;
         bool present;
 
 //Member Functions/Behavoir Created Below
         void playing()
         {
            cout << "I am Playing!!" << endl;
         }
         void studying()
         {
            cout << " I Am Stidying !!" << endl;
         }
         void sleeping()
         {
            cout << "I am Sleeping!! " << endl;
         }
    };
    
int main()
{  
    //Creating object
    Student S1;   //S1 Object Created here!!
    Student S2;   //S2 Object Created Here!!

//Passing values to the object Data members
    S1.id=23;   
    S1.roll_no=234;
    S1.name="Amit";
    S1.class_no=6;
    S1.present=0;

    S2.id=23;
    S2.roll_no=234;
    S2.name="Chutki";
    S2.class_no=6;
    S2.present=0;
    //cout << sizeof(Student) << endl;
    cout << sizeof(S1.name) << endl;   //printing/accessing data member of object S1
    //cout << S1.name << endl;
    S1.playing();                      //Printing member function of Object S1 
    cout << S1.name.size() << " : " << S2.name.size() << endl;   //Getting the Size of string!!

   
    
    
    return 0;
}