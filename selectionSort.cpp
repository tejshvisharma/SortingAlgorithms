#include<iostream>
#include<algorithm>
using namespace std;

void selectionSort(int *arr, int size) {
    int minIndex;
    for (int i = 0; i < size - 1; i++) {
        minIndex = i;
        // Last i elements are already sorted
        for (int j = i+1; j < size; j++) {
            if (arr[j]< arr[minIndex] ) {
                minIndex = j;
                }
        }
        swap(arr[minIndex],arr[i]);
      
        
    }
}

int main() {
    int arr[13] = {1, 3, 10, 5,-1, 12, 8, 6,-3, 9, 4, 7,0};
    selectionSort(arr, 13);
    cout << "The sorted array is: ";
    for (int i = 0; i < (sizeof(arr)/sizeof(int)); i++) {
        cout << arr[i] << ',';
    }
    cout << endl;
    return 0;
}