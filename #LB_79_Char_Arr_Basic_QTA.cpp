#include <iostream>  //adding the header the file "iostream"!!
using namespace std;
int main()
{
  char ch[10];
  cout << "Enter The Name: ";
  cin.getline(ch,25); //entered Amit Ki Jai Ho
  cout << "Direct Used: " << endl << ch << endl;  //this print whole despite the size is 10.....
  cout << "Using For!!" << endl;
  int size=sizeof(ch)/sizeof(ch[0]); //this gives size 10 despite ch took whole Amit ki wala (BTW I am taking about amit as input)
  //so SIZE uspe depend kare
  for(int i=0;i<size;i++) //However this for itsn't printing it shows stack overflow, why?
  {
    cout << ch[i] <<" ";
  }
  return 0;
}
