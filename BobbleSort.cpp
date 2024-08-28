#include<iostream>
using namespace std;

void bubbleSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;
        // Last i elements are already sorted
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
        
    }
}

int main() {
    int arr[10] = {1, 3, 10, 5, 12, 8, 6, 9, 4, 7};
    bubbleSort(arr, 10);
    cout << "The sorted array is: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << ',';
    }
    cout << endl;
    return 0;
}
