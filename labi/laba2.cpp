


//пункт 1
// #include <stdlib.h>
// #include <stdio.h>
//int main() {
//    char* str = NULL;
//    char c;
//    int len = 0;
//
//    while (1) {
//        printf("Input char (stop with .) ");
//        c = getchar();
//
//        if (c == '.') {
//            break;
//        }
//
//
//        char* new_str = (char*)malloc((len + 1) * sizeof(char));
//        if (str != NULL) {
//            for (int i = 0; i < len; i++) {
//                new_str[i] = str[i];
//            }
//            free(str);
//        }
//
//        new_str[len] = c;
//        str = new_str;
//        len++;
//        getchar();
//    }
//    str[len] = '\0';
//    printf("string: %s\n", str);
//    free(str);
//    return 0;
//}

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
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

void write_to_file(const char* filename, const char* str);
char* read_from_file(const char* filename);


int main() {
    char* str = NULL;
    char c;
    int length = 0;
    while (1) {
        printf("Input char (stop with .) ");
        c = getchar();

        if (c == '.') {
            break;
        }

        char* new_str = (char*)malloc((length + 1) * sizeof(char));
        if (str != NULL) {
            for (int i = 0; i < length; i++) {
                new_str[i] = str[i];
            }
            free(str);
        }

        new_str[length] = c;
        str = new_str;
        length++;
        getchar();
    }

    str[length] = '\0';
    printf("string: %s\n", str);
    write_to_file("output.txt", str);
    char* file_str = read_from_file("output.txt");
    printf("string from file: %s\n", file_str);

    free(str);
    free(file_str);
    return 0;
}


void write_to_file(const char* filename, const char* str) {
    FILE* file = fopen(filename, "w");
    fprintf(file, "%s", str);
    fclose(file);
}

char* read_from_file(const char* filename) {
    char* str = NULL;
    size_t size = 0;
    FILE* file = fopen(filename, "r");

    getline(&str, &size, file);

    fclose(file);

    return str;
}
