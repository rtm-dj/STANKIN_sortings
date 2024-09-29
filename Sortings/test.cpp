#include <gtest/gtest.h>

#include "insertion_sort.h"
#include "selection_sort.h"
#include "exchange_sort.h"
#include "bubble_sort.h"
#include "optimized_bubble_sort.h"

// Тест: Сортировка массива с одним элементом
TEST(selectionSortTest, SingleElementArray) {
    int arr[] = { 5 };
    selectionSort(arr, 1);
    EXPECT_EQ(arr[0], 5);
}

// Тест: Уже отсортированный массив
TEST(selectionSortTest, SortedArray) {
    int arr[] = { 1, 2, 3, 4, 5 };
    selectionSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    } 
}

// Тест: Массив в обратном порядке
TEST(selectionSortTest, ReversedArray) {
    int arr[] = { 5, 4, 3, 2, 1 };
    selectionSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

// Тест: Массив с одинаковыми элементами
TEST(selectionSortTest, AllSameElements) {
    int arr[] = { 7, 7, 7, 7 };
    selectionSort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };
    for (int i = 0; i < 4; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

// Тест: Массив с отрицательными числами
TEST(selectionSortTest, ArrayWithNegativeNumbers) {
    int arr[] = { 3, -1, 2, -5, 0 };
    selectionSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

// Тест: Массив типа double
TEST(selectionSortTest, DoubleArray) {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    selectionSort(arr, 5);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
