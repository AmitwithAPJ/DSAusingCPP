#include <iostream>
using namespace std;

int Peak_Element(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if ((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == size - 1 || arr[mid] >= arr[mid + 1])) {
            // If arr[mid] is greater than or equal to its neighbors, it's a peak element
            return mid;  //
        } else if (mid > 0 && arr[mid - 1] > arr[mid]) {
            // If arr[mid - 1] is greater than arr[mid], search left
            end = mid - 1;
        } else {
            // Otherwise, search right
            start = mid + 1;
        }
    }
    // If no peak element found, return -1 or handle appropriately based on your requirements
    return -1;
}

int main() {
    int arr[] = {10, 20, 30,30,40,50,60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = Peak_Element(arr, size);
    if (result != -1) {
        cout << "The Peak Element is: " << arr[result] << endl;
    } else {
        cout << "No Peak Element Found" << endl;
    }
    return 0;
}
