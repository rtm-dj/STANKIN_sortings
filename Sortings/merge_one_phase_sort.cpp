template <typename T>
void mergeOnePhase(T arr[], int size) {
    T* temp = new T[size];

    for (int width = 1; width < size; width *= 2) {
        for (int i = 0; i < size; i += 2 * width) {
            int left = i;
            int mid = std::min(i + width, size);
            int right = std::min(i + 2 * width, size);

            int l = left, r = mid, k = left;

            while (l < mid && r < right) {
                if (arr[l] <= arr[r]) {
                    temp[k++] = arr[l++];
                }
                else {
                    temp[k++] = arr[r++];
                }
            }

            while (l < mid) {
                temp[k++] = arr[l++];
            }

            while (r < right) {
                temp[k++] = arr[r++];
            }
        }

        for (int i = 0; i < size; i++) {
            arr[i] = temp[i];
        }
    }

    delete[] temp;
}

template void mergeOnePhase<int>(int[], int);
template void mergeOnePhase<double>(double[], int);
