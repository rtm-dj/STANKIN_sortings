#include <gtest/gtest.h>

//������� 1
#include "insertion_sort.h"
#include "selection_sort.h"
#include "exchange_sort.h"
#include "bubble_sort.h"
#include "optimized_bubble_sort.h"


//������� 2
#include "binary_insertion_sort.h"
#include "shaker_sort.h"


//������� 3
#include "shell_sort.h"
//������������ ��� shakerSort(arr, size);
#include "quick_sort.h"
//������������ ��� quickSort(arr, 0, size - 1);


//������� 4
#include "shell_sort.h"
#include "quick_sort.h"




// ����: ���������� ������� � ����� ���������
TEST(shakerSortTest, SingleElementArray) {
    int arr[] = { 5 };
    shakerSort(arr, 1);
    EXPECT_EQ(arr[0], 5);
}

// ����: ��� ��������������� ������
TEST(shakerSortTest, SortedArray) {
    int arr[] = { 1, 2, 3, 4, 5 };
    shakerSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    } 
}

// ����: ������ � �������� �������
TEST(shakerSortTest, ReversedArray) {
    int arr[] = { 5, 4, 3, 2, 1 };
    shakerSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

// ����: ������ � ����������� ����������
TEST(shakerSortTest, AllSameElements) {
    int arr[] = { 7, 7, 7, 7 };
    shakerSort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };
    for (int i = 0; i < 4; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

// ����: ������ � �������������� �������
TEST(shakerSortTest, ArrayWithNegativeNumbers) {
    int arr[] = { 3, -1, 2, -5, 0 };
    shakerSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

// ����: ������ ���� double
TEST(shakerSortTest, DoubleArray) {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    shakerSort(arr, 5);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
