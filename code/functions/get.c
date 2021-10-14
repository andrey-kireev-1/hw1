#include "../headers/headers.h"

int get_int(int *number){

    char* line;
    while (true) {
        // Read token token from stdout, ended by newline
        if (!scanf("%d", &number) || getchar() != '\n') {
            // Clear stdout before reading next token
            while ((line = getchar()) != '\n' && line != EOF);

        } else {
            return number;
        }
        printf("Неверный ввод. Повторите ввод.\n");
    }
}

double get_double(double number){
    char* line;
    while (true) {
        // Read token token from stdout, ended by newline
        if (!scanf("%lf", &number) || getchar() != '\n') {
            // Clear stdout before reading next token
            while ((line = getchar()) != '\n' && line != EOF);

        } else {
            return number;
        }
        printf("Неверный ввод. Повторите ввод.\n");
    }
}