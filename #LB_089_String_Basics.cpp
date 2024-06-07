#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
  string name;
    //basic name printing in string!!
 // cin >> name;
 //cout << "printing: " << name;
    //name printing through loop for each index!!
 /*int i=0;
  while(name[i]!='\0')
  {
    cout << "At Index: " << i << " Character: " << name[i] << endl;  //
    i++;
  }
  */
    //checking Null Characters!!
 int i=0;
 getline(cin,name);
 while(i>=0)
 {
  if(name[i]=='\0')
  {
     cout << "Null Character Founded at: " << i << " ASCII Value: " 
     << static_cast<int>(name[i]);
     break;
  }
  i++;
 }





  return 0;
}
