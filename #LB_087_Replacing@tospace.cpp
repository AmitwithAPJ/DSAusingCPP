#include <iostream>
using namespace std;//
void replacing(char ch[], int size)
{
   int i=0;
   while(ch[i]!='\0')
   {
     if(ch[i]=='@')
     {
      cout << " ";
     }
     else
     {
       cout << ch[i];
     }
     i++;
   }
}
int main()
{
  char ch[25];
  int size=sizeof(ch)/sizeof(ch[0]);
  cout << "Enter the string: ";
  cin.getline(ch,size);
  replacing(ch,size);
}
