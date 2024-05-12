#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  char ch[25];   //char array of size 25!!
  cin.getline(ch,25);
  int size=strlen(ch);
  for(int i=0;i<size;i++)
  {
      if(ch[i]>='A' && ch[i]<='Z')
      {
        int temp=static_cast<int>(ch[i]-'A'+'a');
        //int temp=static_cast<int>(ch[i])+32;
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
