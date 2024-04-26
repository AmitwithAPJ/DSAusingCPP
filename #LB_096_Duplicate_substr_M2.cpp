#include <iostream>
using namespace std;
#include <limits.h>
void removing(string str, string part)
{
   while(str.find(part)!=string::npos)
   {
      str.erase(str.find(part),part.length());
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