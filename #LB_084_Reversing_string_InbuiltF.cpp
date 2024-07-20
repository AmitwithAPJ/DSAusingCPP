#include <iostream>
#include <algorithm> // including the algorithm header file
#include <string> // normal string header file
//#include <cstring> for M2 Method jo i c-stye string method hai
using namespace std;
int main()
{
  char ch[20];  //char array of size 20
  int size=sizeof(ch)/sizeof(ch[0]);
  cin.getline(ch,size);
  cout << "Before Swapping: " << ch << endl;
  string str(ch);
  reverse(str.begin(),str.end());
  cout << "Inbuilt Func: " << str << endl;
  //reverse(ch,ch+strlen(ch));
  //cout << "Inbuilt FuncM2: " << ch << endl;


  return 0;
}
