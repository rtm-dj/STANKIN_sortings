


//пункт 1
 #include <stdlib.h>
 #include <stdio.h>
#include <iostream>


void processString(char*& str, int& length) {
    int i = 0;
    while (i < length) {
        if (str[i] == '!') {

            if ((i + 1 < length) && ((str[i + 1] >= 'A' && str[i + 1] <= 'Z') || (str[i + 1] >= 'a' && str[i + 1] <= 'z'))) {

                str = (char*)realloc(str, (length + 3) * sizeof(char));

                for (int j = length; j > i; --j) {
                    str[j + 2] = str[j];
                }

                str[i + 1] = '?';
                str[i + 2] = '?';
                length += 2;
                i += 3;
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

int calculateLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}


int main() {
    char* str = NULL;
    char c;
    int len = 0;

    while (1) {
        printf("Input char (stop with .) ");
        c = getchar();

        if (c == '.') {
            char* new_str = (char*)malloc((len + 1) * sizeof(char));
            if (str != NULL) {
                for (int i = 0; i < len; i++) {
                    new_str[i] = str[i];
                }
                free(str);
            }

            new_str[len] = '\0';
            str = new_str;
            break;
        }


        char* new_str = (char*)malloc((len + 1) * sizeof(char));
        if (str != NULL) {
            for (int i = 0; i < len; i++) {
                new_str[i] = str[i];
            }
            free(str);
        }

        new_str[len] = c;
        str = new_str;
        len++;
        getchar();
    }
    printf("inputed string: '%s'\n", str);

    int length = calculateLength(str);

    processString(str, length);
    printf("processed string: '%s'\n", str);


    free(str);
    return 0;
}

//пункт 2
//#include <stdlib.h>
//#include <stdio.h>
//
//int main() {
//    char* str = (char*)calloc(5, sizeof(char));
//    char c;
//    int length = 0;
//    int capacity = 5;
//
//    while (1) {
//        printf("Input char (stop with .) ");
//        c = getchar();
//
//        if (c == '.') {
//            break;
//        }
//
//        if (length == capacity) {
//            capacity += 5;
//            str = (char*)realloc(str, capacity * sizeof(char));
//        }
//
//        str[length] = c;
//        length++;
//        getchar();
//    }
//
//    str[length] = '\0';
//    printf("string: %s\n", str);
//    free(str);
//    return 0;
//}

//пункт 3
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <stdio.h>
//#include <string>
//using namespace std;
//
//void write_to_file(const char* filename, const char* str);
//char* read_from_file(const char* filename);
//
//
//int main() {
//    char* str = NULL;
//    char c;
//    int length = 0;
//    while (1) {
//        printf("Input char (stop with .) ");
//        c = getchar();
//
//        if (c == '.') {
//            break;
//        }
//
//        char* new_str = (char*)malloc((length + 1) * sizeof(char));
//        if (str != NULL) {
//            for (int i = 0; i < length; i++) {
//                new_str[i] = str[i];
//            }
//            free(str);
//        }
//
//        new_str[length] = c;
//        str = new_str;
//        length++;
//        getchar();
//    }
//
//    str[length] = '\0';
//    printf("string: %s\n", str);
//    write_to_file("output.txt", str);
//    char* file_str = read_from_file("output.txt");
//    printf("string from file: %s\n", file_str);
//
//    free(str);
//    free(file_str);
//    return 0;
//}
//
//
//void write_to_file(const char* filename, const char* str) {
//    FILE* file = fopen(filename, "w");
//    fprintf(file, "%s", str);
//    fclose(file);
//}
//
//char* read_from_file(const char* filename) {
//    char* str = NULL;
//    size_t size = 0;
//    FILE* file = fopen(filename, "r");
//
//    getline(&str, &size, file);
//
//    fclose(file);
//
//    return str;
//}
