#include <iostream>
using namespace std;
#include <limits.h>
void removal(string str, int k)
{
   int index=0;
   while(index<=str.length()-(k-1))
   {
      int count=1;
      for(int j=index;j<index+k-1;j++)
      { 
         
         if(str[j]==str[j+1])
         {
            count++;
         }
         else
         {
            break;
         }
      }
      if(count==k)
      {
         str.erase(index,k);
         index=0;
      }
      else
      {
          index++;
      }
   }
   cout <<"After Removal: " << str << endl;
}
int main()
{

  string str;
  int k;
  cout <<"Enter the String: ";
  getline(cin,str);
  cout << "Enter the k value: ";
  cin >> k;
  removal(str,k);
  

  return 0; 
}