//Program for finding substr in a sring!!!
#include <iostream>
using namespace std;
#include <limits.h>
void removing(string str, string part)
{
   int index=0;  //index variable created
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
   string str;    //creating a string of name str
   string part;   //same but name as part
   cout << "Enter the String: ";
   getline(cin,str);    //taking input through the getline function 
   cout << "Enter the part: "; 
   getline(cin,part);      
   removing(str,part);         //passing argument into the function "removing"
   
   return 0;
}
