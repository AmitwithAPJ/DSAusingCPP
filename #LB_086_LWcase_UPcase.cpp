#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  char ch[25];
  cin.getline(ch,25);
  int size=strlen(ch);
  for(int i=0;i<size;i++)
  {
      if(ch[i]>='a' && ch[i]<='z')
      {
        //int temp=static_cast<int>(ch[i]-'a'+'A');
        int temp=static_cast<int>(ch[i])-32;
        cout << static_cast<char>(temp); 
      }
      else if(ch[i] !=' ')
      {
          cout << ch[i];
      }
      else
      {
          cout << " ";
      }
  }

  return 0;
}