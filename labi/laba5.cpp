#include <gtest/gtest.h>
#include "laba3.cpp"  // Подключаем заголовочный файл с реализацией классов

// Тесты для OneList
TEST(OneListTest, Constructor) {
    OneList<int> list;
    EXPECT_TRUE(list.empty());
    EXPECT_EQ(list.size(), 0);
}

TEST(OneListTest, PushFrontEmptyList) {
    OneList<int> list;
    list.push_front(10);
    EXPECT_EQ(list.size(), 1);
    EXPECT_EQ(list.front(), 10);
    EXPECT_EQ(list.back(), 10);
}

TEST(OneListTest, PushBackEmptyList) {
    OneList<int> list;
    list.push_back(10);
    EXPECT_EQ(list.size(), 1);
    EXPECT_EQ(list.front(), 10);
    EXPECT_EQ(list.back(), 10);
}

TEST(OneListTest, PushFrontNonEmptyList) {
    OneList<int> list;
    list.push_back(10);
    list.push_front(20);
    EXPECT_EQ(list.size(), 2);
    EXPECT_EQ(list.front(), 20);
    EXPECT_EQ(list.back(), 10);
}

TEST(OneListTest, PushBackNonEmptyList) {
    OneList<int> list;
    list.push_front(10);
    list.push_back(20);
    EXPECT_EQ(list.size(), 2);
    EXPECT_EQ(list.front(), 10);
    EXPECT_EQ(list.back(), 20);
}

TEST(OneListTest, InsertAtStart) {
    OneList<int> list;
    list.push_back(10);
    list.insert(0, 5);
    EXPECT_EQ(list.size(), 2);
    EXPECT_EQ(list.front(), 5);
    EXPECT_EQ(list.back(), 10);
}

TEST(OneListTest, InsertAtEnd) {
    OneList<int> list;
    list.push_back(10);
    list.push_back(20);
    list.insert(2, 25);
    EXPECT_EQ(list.size(), 3);
    EXPECT_EQ(list.back(), 25);
}

TEST(OneListTest, PopFront) {
    OneList<int> list;
    list.push_back(10);
    list.push_back(20);
    list.pop_front();
    EXPECT_EQ(list.size(), 1);
    EXPECT_EQ(list.front(), 20);
}

TEST(OneListTest, PopBack) {
    OneList<int> list;
    list.push_back(10);
    list.push_back(20);
    list.pop_back();
    EXPECT_EQ(list.size(), 1);
    EXPECT_EQ(list.back(), 10);
}

TEST(OneListTest, Remove) {
    OneList<int> list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(10);
    list.remove(10);
    EXPECT_EQ(list.size(), 1);
    EXPECT_EQ(list.front(), 20);
}

TEST(OneListTest, FrontThrowsExceptionOnEmpty) {
    OneList<int> list;
    EXPECT_THROW(list.front(), std::underflow_error);
}

TEST(OneListTest, BackThrowsExceptionOnEmpty) {
    OneList<int> list;
    EXPECT_THROW(list.back(), std::underflow_error);
}

TEST(OneListTest, Clear) {
    OneList<int> list;
    list.push_back(10);
    list.push_back(20);
    list.clear();
    EXPECT_TRUE(list.empty());
}

// Тесты для DoubleList
TEST(DoubleListTest, Constructor) {
    DoubleList<int> list;
    EXPECT_TRUE(list.empty());
    EXPECT_EQ(list.size(), 0);
}

TEST(DoubleListTest, PushFrontEmptyList) {
    DoubleList<int> list;
    list.push_front(10);
    EXPECT_EQ(list.size(), 1);
    EXPECT_EQ(list.front(), 10);
    EXPECT_EQ(list.back(), 10);
}

TEST(DoubleListTest, PushBackEmptyList) {
    DoubleList<int> list;
    list.push_back(10);
    EXPECT_EQ(list.size(), 1);
    EXPECT_EQ(list.front(), 10);
    EXPECT_EQ(list.back(), 10);
}

TEST(DoubleListTest, PushFrontNonEmptyList) {
    DoubleList<int> list;
    list.push_back(10);
    list.push_front(20);
    EXPECT_EQ(list.size(), 2);
    EXPECT_EQ(list.front(), 20);
    EXPECT_EQ(list.back(), 10);
}

TEST(DoubleListTest, PushBackNonEmptyList) {
    DoubleList<int> list;
    list.push_front(10);
    list.push_back(20);
    EXPECT_EQ(list.size(), 2);
    EXPECT_EQ(list.front(), 10);
    EXPECT_EQ(list.back(), 20);
}

TEST(DoubleListTest, InsertAtStart) {
    DoubleList<int> list;
    list.push_back(10);
    list.insert(0, 5);
    EXPECT_EQ(list.size(), 2);
    EXPECT_EQ(list.front(), 5);
    EXPECT_EQ(list.back(), 10);
}

TEST(DoubleListTest, InsertAtEnd) {
    DoubleList<int> list;
    list.push_back(10);
    list.push_back(20);
    list.insert(2, 25);
    EXPECT_EQ(list.size(), 3);
    EXPECT_EQ(list.back(), 25);
}

TEST(DoubleListTest, PopFront) {
    DoubleList<int> list;
    list.push_back(10);
    list.push_back(20);
    list.pop_front();
    EXPECT_EQ(list.size(), 1);
    EXPECT_EQ(list.front(), 20);
}

TEST(DoubleListTest, PopBack) {
    DoubleList<int> list;
    list.push_back(10);
    list.push_back(20);
    list.pop_back();
    EXPECT_EQ(list.size(), 1);
    EXPECT_EQ(list.back(), 10);
}

TEST(DoubleListTest, Remove) {
    DoubleList<int> list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(10);
    list.remove(10);
    EXPECT_EQ(list.size(), 1);
    EXPECT_EQ(list.front(), 20);
}

TEST(DoubleListTest, FrontThrowsExceptionOnEmpty) {
    DoubleList<int> list;
    EXPECT_THROW(list.front(), std::underflow_error);
}

TEST(DoubleListTest, BackThrowsExceptionOnEmpty) {
    DoubleList<int> list;
    EXPECT_THROW(list.back(), std::underflow_error);
}

TEST(DoubleListTest, Clear) {
    DoubleList<int> list;
    list.push_back(10);
    list.push_back(20);
    list.clear();
    EXPECT_TRUE(list.empty());
}

// Тесты на память и многократное добавление/удаление

TEST(MemoryTest, MultipleAdditions) {
    OneList<int> list;
    for (int i = 0; i < 1000000; ++i) {
        list.push_back(i);
    }
    EXPECT_EQ(list.size(), 1000000);
}

TEST(MemoryTest, MultipleRemovals) {
    OneList<int> list;
    for (int i = 0; i < 1000000; ++i) {
        list.push_back(i);
    }
    for (int i = 0; i < 1000000; ++i) {
        list.pop_back();
    }
    EXPECT_TRUE(list.empty());
}

// Проверка исключений при работе с пустым списком
TEST(ExceptionTest, PopFrontOnEmpty) {
    OneList<int> list;
    EXPECT_THROW(list.pop_front(), std::underflow_error);
}

TEST(ExceptionTest, PopBackOnEmpty) {
    OneList<int> list;
    EXPECT_THROW(list.pop_back(), std::underflow_error);
}

TEST(ExceptionTest, RemoveOnEmpty) {
    OneList<int> list;
    EXPECT_NO_THROW(list.remove(10));  // no elements, should not throw
}

TEST(ExceptionTest, InsertOutOfRange) {
    OneList<int> list;
    EXPECT_THROW(list.insert(1, 10), std::out_of_range);
}

TEST(ExceptionTest, AccessInvalidIndex) {
    OneList<int> list;
    list.push_back(10);
    EXPECT_THROW(list[1], std::out_of_range);
}

// Память после уничтожения
TEST(MemoryTest, DestructorMemory) {
    OneList<int>* list = new OneList<int>();
    list->push_back(10);
    list->push_back(20);
    delete list;
    EXPECT_TRUE(true);  // Проверка на утечку памяти выполняется внешними средствами
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    
    return RUN_ALL_TESTS();
}