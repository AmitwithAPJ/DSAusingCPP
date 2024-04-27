#include <iostream>
#include <vector>
using namespace std;
vector<int> prime_checking(int num)
{
   vector<int>temp;
   for(int i=2;i<num;i++)
   {
       bool bool_temp=false;
      for(int j=2;j<i;j++)
      {
         if(i%j==0)
         {
            bool_temp=true;
            break;
         }
      }
      if(bool_temp==true)
      {
          continue;
      }
      else
      {
        temp.push_back(i);  
      }
      
    
   }
   return temp;
}
int main()
{
int num;
cout << "Enter till u want to get primes: ";
cin >> num;
vector<int>arr=prime_checking(num);
for(int i=0;i<arr.size();i++)
{
   cout << arr[i] << " ";
}



   return 0;
}