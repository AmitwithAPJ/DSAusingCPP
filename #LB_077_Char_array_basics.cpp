#include <iostream>
#include <vector> // necessary step
using namespace std;
int main()
{
    char ch[10];
    cout << "Enter the character: ";
    cin >> ch;
    cout << "Traversing Started!!" << endl;
    for(int i=0;i<10;i++)
    {
        cout << "At Index: " << i << " " << ch[i] << endl;
        cout << "At Every New Index: " << ch[i] << endl;
    }
    cout << ch;
    cout << "The Traversing Ended!!" << endl;

    return 0;
}