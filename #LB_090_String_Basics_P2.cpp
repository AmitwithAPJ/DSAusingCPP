#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
/*string main_name;
string sur_name;
cout << "Enter the name here: ";
getline(cin,main_name);*/
/*cout << "Length: " << name.length() << endl;
cout << "Is String Empty: " << name.empty() << endl;
cout << "Character at 0 is: " << name.at(0) << endl;
cout << "First Elemnent of String: "  << name.front() << endl;
cout << "Last Element of string: " << name.back() << endl;*/

//Appending the string!!

/*cout << "Enter the sur name: ";
getline(cin,sur_name);
cout << "Before Appending: " << endl;
cout << main_name << endl;
cout << sur_name << endl;
main_name.append(sur_name);
cout << "After Appending!! " << endl;
cout << main_name << endl;
cout << sur_name << endl;*/

//some other strings method!!

string big;
cout << "Enter a sentence: "; //Amit Patel Ki Jai
getline(cin,big);
big.erase(10,3);
cout << "erasing: "<< big << endl;
string add=" Ki";
big.insert(10,add);
cout << "Inserting: " <<big << endl;
big.push_back('O');
cout << "push_back used: " << big << endl;
big.pop_back();
cout << "pop_back used: " << big << endl;



  return 0;
}
