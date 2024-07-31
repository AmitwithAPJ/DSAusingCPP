#include <iostream>
using namespace std;
#include<string.h>
bool checking(char ch[])
{
   int start=0;
   int end=strlen(ch)-1;
   while(start<=end)
   {
      if(ch[start]==ch[end])
      {
        start++;
        end--;
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
  char ch[25];   //created char array of size "25"
  cout << "Enter the String to Check Palindrome: ";
  cin.getline(ch,25);
  if(checking(ch))
  {
    cout << "It is a Palindrome!!" << endl;
  }
  else
  {
    cout << "It is not a Palindrome!!" << endl;
  }

  return 0;
}
