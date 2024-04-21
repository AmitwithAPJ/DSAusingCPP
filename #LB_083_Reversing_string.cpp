#include <iostream>
#include <string.h> //or <cstring> same he hai
using namespace std;
int main()
{
  char ch[20];
  int size=sizeof(ch)/sizeof(ch[0]);
  cin.getline(ch,size);
  cout << "Before Swapping: " << ch << endl;
  string str(ch);
 int start=0;
  int end=strlen(ch)-1;
  while(start<end)
  {
    swap(ch[start],ch[end]);
    start++;
    end--;
  }
  cout << "After Swapping: " << ch << endl;





  return 0;
}