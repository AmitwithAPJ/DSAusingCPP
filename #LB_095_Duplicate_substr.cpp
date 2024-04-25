#include <iostream>
using namespace std;
#include <limits.h>
void removing(string str, string part)
{
   int index=0;
   while(index<str.length())
   {
      if(str.find(part)==string::npos)
      {
         index++;
      }
      else
      {
         str.erase(str.find(part),part.length());
         index=0;
      }
   }
   cout << "After removal: " << str << endl;
}
int main()
{
   string str;
   string part;
   cout << "Enter the String: ";
   getline(cin,str);
   cout << "Enter the part: ";
   getline(cin,part);
   removing(str,part);




   return 0;
}