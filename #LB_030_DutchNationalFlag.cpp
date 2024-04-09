//Program for Butch National flag Problem, in which we will sort 0,1,2 in increasing order!!
#include <iostream>
using namespace std;

void dutchNationalFlag(int arr[], int size) {
    int low = 0, mid = 0, high = size - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int arr[]={0,1,2,0,2,1,0,1,1,0,0,1,2,1,2,0,1,2};
    int size=18;

    dutchNationalFlag(arr, size);  //Passing arguments to the fucntion(DutchNationalFlag)

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
