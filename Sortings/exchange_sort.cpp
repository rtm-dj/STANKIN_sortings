#include "exchange_sort.h"

template <typename T>
void exchangeSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template void exchangeSort<int>(int[], int);
template void exchangeSort<double>(double[], int);