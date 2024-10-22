#include <iostream>
#include <cstring>
#include <fstream>
#define strdup _strdup

//задача 25

//пункт 1
//void processString(char str[], int& length) {
//    int i = 0;
//    while (i < length) {
//        if (str[i] == '!') {
//            if ((i + 1 < length) && ((str[i + 1] >= 'A' && str[i + 1] <= 'Z') || (str[i + 1] >= 'a' && str[i + 1] <= 'z'))) {
//                if (length + 2 < 100) {
//                    for (int j = length; j > i; --j) {
//                        str[j + 2] = str[j];
//                    }
//                    str[i + 1] = '?';
//                    str[i + 2] = '?';
//                    length += 2; 
//                    i += 3;
//                }
//            }
//            else {
//                str[i] = ' ';
//                i++;
//            }
//        }
//        else {
//            i++;
//        }
//    }
//}
//
//int main() {
//    char str[100] = "Test!123 !hello!";
//    int length = 15;
//
//    processString(str, length);
//
//    std::cout << "result: " << str << std::endl;
//
//    return 0;
//}







//пункт 2
//void processString(char str[], int& length) {
//    int i = 0;
//    while (i < length) {
//        if (str[i] == '!') {
//            if ((i + 1 < length) && ((str[i + 1] >= 'A' && str[i + 1] <= 'Z') || (str[i + 1] >= 'a' && str[i + 1] <= 'z'))) {
//                if (length + 2 < 100) {
//                    for (int j = length; j > i; --j) {
//                        str[j + 2] = str[j];
//                    }
//                    str[i + 1] = '?';
//                    str[i + 2] = '?';
//                    length += 2; 
//                    i += 3; 
//                }
//            }
//            else {
//                str[i] = ' ';
//                i++;
//            }
//        }
//        else {
//            i++;
//        }
//    }
//}
//
//int calculateLength(char str[]) {
//    int length = 0;
//    while (str[length] != '\0') {
//        length++;
//    }
//    return length;
//}
//
//int main() {
//    const char* words = "Test!123 !hello!";
//    char *str = strdup(words);
//
//    int length = calculateLength(str);
//
//    processString(str, length);
//
//    std::cout << "result: " << str << std::endl;
//
//    return 0;
//}










//пункт 3
void processString(char str[], int& length) {
    int i = 0;
    while (i < length) {
        if (str[i] == '!') {
            if ((i + 1 < length) && ((str[i + 1] >= 'A' && str[i + 1] <= 'Z') || (str[i + 1] >= 'a' && str[i + 1] <= 'z'))) {
                if (length + 2 < 100) {
                    for (int j = length; j > i; --j) {
                        str[j + 2] = str[j];
                    }
                    str[i + 1] = '?';
                    str[i + 2] = '?';
                    length += 2;
                    i += 3;
                }
            }
            else {
                str[i] = ' ';
                i++;
            }
        }
        else {
            i++;
        }
    }
}

int main() {
    char str[100];
    int length = 0;

    std::ifstream inputFile("file1.txt");

    inputFile.getline(str, sizeof(str));
    while (str[length] != '\0') {
        length++;
    }
    inputFile.close();

    processString(str, length);

    std::ofstream outputFile("file2.txt");

    outputFile << str;
    outputFile.close();

    return 0;
}