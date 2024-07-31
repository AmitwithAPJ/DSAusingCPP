#include <iostream>
using namespace std;
int main()
{
  char ch[25]={'Amit Patel'};
 // cout << "Enter the string: ";
 //cin.getline(ch,25);
  int i=0;
  int temp;
  while(ch[i]!='\0')
  {
     temp=i;
     i++;
  }
  int value=static_cast<int>(temp+1);
  cout << "The Value of Null characetr is: " << value << endl;

  return 0;
}
