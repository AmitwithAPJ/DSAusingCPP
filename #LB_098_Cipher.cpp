#include <iostream>
#include <limits.h>
using namespace std;
string decoding(string key, string message)  //string name-> decoding
{
  char temp='a';   
  char arr[200]={0};  //taken a long char array with a initialized values of 0.
  for(auto ch: key)
  {
     if(ch!=' ' && arr[ch]==0)
     {
        arr[ch]=temp;
        temp++;
     }
  }
  string ans;
  for(auto ch: message)
  {
     if(ch!=' ')
     {
        char temp1=arr[ch];
        ans.push_back(temp1);
     }
     else
     {
       ans.push_back(' ');
     }
  }
  return ans;
}
int main()
{
   string key="Theek Hai Bhai";
   string message="Ha BaT";
   string result=decoding(key,message);
   cout << result;





   return 0;
}
