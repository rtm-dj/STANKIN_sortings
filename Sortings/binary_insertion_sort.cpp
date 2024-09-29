#include "binary_insertion_sort.h"

template <typename T>
int binarySearch(T arr[], T item, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == item) {
            return mid + 1;
        }
        else if (arr[mid] < item) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return low;
}

template <typename T>
void binaryInsertionSort(T arr[], int size) {
    for (int i = 1; i < size; i++) {
        T key = arr[i];
        int location = binarySearch(arr, key, 0, i - 1);

        for (int j = i - 1; j >= location; j--) {
            arr[j + 1] = arr[j];
        }

        arr[location] = key;
    }
}

template void binaryInsertionSort<int>(int[], int);
template void binaryInsertionSort<double>(double[], int);
