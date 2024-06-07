#include <iostream>
#include <limits.h>
using namespace std;//
void removing_duplicates(string str)
{
   int index=0;
   string temp;
   while(index<str.length())
   {
    if(temp.length()>0 && temp[temp.length()-1]==str[index])
    {
       temp.pop_back();
    }
    else
   {
      temp.push_back(str[index]);
   }
   index++;
   }
   cout << "The String is: " << temp << endl;
}
int main()
{
  string str;
  cout << "Enter the string: ";
  getline(cin,str);
  removing_duplicates(str);



  return 0;
}
