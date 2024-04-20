#include <iostream>
using namespace std;
int main()
{
  char ch[10];
  int size=sizeof(ch)/sizeof(ch[0]);
  cin.getline(ch,size);
  int length=0;
  int i=0;
  while(ch[i]!='\0') //no need to run it to the size as last element will always be null vector!!
  {
    if (ch[i]!=' ')
    {
      length++;
    }
     i++;
  }
  cout << "The Length is: " << length<< endl;




  return 0;
}