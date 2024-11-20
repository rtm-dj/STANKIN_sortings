template <typename T>
void naturalMergeSort(T arr[], int size) {
    T* temp = new T[size];

    while (true) {
        int left = 0, k = 0;
        bool sorted = true;

        while (left < size) {
            int mid = left + 1;
            while (mid < size && arr[mid - 1] <= arr[mid]) {
                mid++;
            }

            if (mid < size) {
                sorted = false;
            }

            int right = mid + 1;
            while (right < size && arr[right - 1] <= arr[right]) {
                right++;
            }

            int l = left, m = mid, r = left;

            while (l < mid && m < right) {
                temp[r++] = (arr[l] <= arr[m]) ? arr[l++] : arr[m++];
            }

            while (l < mid) {
                temp[r++] = arr[l++];
            }

            while (m < right) {
                temp[r++] = arr[m++];
            }

            left = right;
        }

        for (int i = 0; i < size; i++) {
            arr[i] = temp[i];
        }

        if (sorted) {
            break;
        }
    }

    delete[] temp;
}

template void naturalMergeSort<int>(int[], int);
template void naturalMergeSort<double>(double[], int);
