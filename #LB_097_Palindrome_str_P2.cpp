#include <iostream>
#include <limits.h>
using namespace std;
bool checking_palindrome(string str)
{
   int start=0;
   int end=str.length()-1;
   int index=1; //set index variable as 1 !!
   while(start<=end)
   {
      if(str[start]==str[end])
      {
         start++; //
         end--;
      }
      else if(str[start]!=str[end])
      {
          while(index)
      {
         if(str[start+1]==str[end])
         {
            str.erase(start-1,1);
            start++;;
            end=end-2;
         }
         else if(str[start]==str[end-1])
         {
            str.erase(str[end-1],1);
            start++;
            end=end-2;
         }
         else
         {
            return false;
         }
         index--;
      }
      }
      else
      {
         return false;
      }
   }
   return true;
}
int main()
{
   string str;
   cout << "Enter the string: ";
   getline(cin,str);
   if(checking_palindrome(str))
   {
      cout << "Palindrome!!" << endl;
   }
   else
   {
      cout << "Not a Palindrome!!" << endl;
   }
   



   return 0;
}
