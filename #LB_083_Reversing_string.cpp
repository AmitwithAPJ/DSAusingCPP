#include <iostream>
#include <string.h> //or <cstring> same he hai
using namespace std;
int main()
{
  char ch[20];
  int size=sizeof(ch)/sizeof(ch[0]);
  cin.getline(ch,size);
  cout << "Before Swapping: " << ch << endl;
  string str(ch);  //finding the length of string named as "ch"
  int start=0; //initializing the start
  int end=strlen(ch)-1; //seting end using "strlen" keyword
  while(start<end) //putting the conditions 
  {
    swap(ch[start],ch[end]);  //swapping the elements (start & end)
    start++;  //increment in start!!
    end--;   //decreasing the end!!
  }
  cout << "After Swapping: " << ch << endl;





  return 0;
}
