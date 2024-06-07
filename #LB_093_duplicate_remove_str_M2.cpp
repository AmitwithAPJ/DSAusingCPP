#include <iostream>
using namespace std;
#include <limits.h>//
void duplicate_removing(string str)
{
    int index=0;
    while(index<str.length())
    {
        if(str[index]==str[index+1])
        {
            str.erase(index,2);
            index=0;
        }
        else
        {
            index++;
        }
    }
    cout << "After Removing: " << str << endl;
}
int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin,str);
    duplicate_removing(str);
    
    
    return 0;
}
