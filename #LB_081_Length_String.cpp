#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  char ch[25];
  int size=sizeof(ch)/sizeof(ch[0]);
  cin.getline(ch,size);
  int length=0;
  for(int i=0;i<size;i++)
  {
    if(ch[i]!='\0')
    {
      if(ch[i]!=' ')
      {
        length++;
      }
    }
    else
    {
      break;
    }
  }
  cout << "The Length of a String is: " << length << endl;
  cout << "Inbuilt Function: " << strlen(ch)<< endl;






  return 0;
}