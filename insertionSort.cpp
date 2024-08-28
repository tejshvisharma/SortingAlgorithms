#include<iostream>
#include<algorithm>
using namespace std;

void insertionSort(int *arr, int size) {
    
    for (int i = 1; i <size ; i++) {
        int temp = arr[i];
        int j = i-1;
        for ( ; j >= 0; j--) {
            if (arr[j]> temp ) {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
    }
}
int main() {
    int arr[13] = {1, 3, 10, 5,-1, 12, 8, 6,-3, 9, 4, 7,0};
    insertionSort(arr, 13);
    cout << "The sorted array is: ";
    for (int i = 0; i < (sizeof(arr)/sizeof(int)); i++) {
        cout << arr[i] << ',';
    }
    cout << endl;
    return 0;
}