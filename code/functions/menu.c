#include "../headers/headers.h"
#include "../headers/global_arr.h"

int submenu_region(){
    char * choice = (char *) calloc(BUFLEN1, 1);
    int int_choice = -1;
    int i = 0;
    printf("Выберите нужный регион\n");
    while(i < ARR_COUNT){
        printf("%d - %s\n", i+1, region_arr[i]);
        i++;
    }
    while(true){
        fgets(choice, BUFLEN1, stdin);
        if (((*choice) >= '1') && (*choice <= '1'+i-1) && (*(choice+2) == '\0'))        //Проверяем является ли первый символ нужным числом, а проверка на нуль-символ отбрасывает случаи, где ввод более двух символов, т.к.: choice[3] == '1\n\0'
        {
            int_choice = atoi(choice);
            free(choice);
            break;
        }
        else
        {
            printf("Неверный ввод. Повторите ввод.\n");
        }
    }
    return int_choice-1;
}

int submenu_usage(){
    char * choice = (char *) calloc(BUFLEN1, 1);
    int int_choice = -1;
    int i = 0;
    printf("Выберите нужное значение\n");
    while(i < ARR_COUNT){
        printf("%d - %s\n", i+1, usage_arr[i]);
        i++;
    }
    while(true){
        fgets(choice, BUFLEN1, stdin);
        if (((*choice) >= '1') && (*choice <= '1'+i-1) && (*(choice+2) == '\0'))        //Проверяем является ли первый символ нужным числом, а проверка на нуль-символ отбрасывает случаи, где ввод более двух символов, т.к.: choice[3] == '1\n\0'
        {
            int_choice = atoi(choice);
            free(choice);
            break;
        }
        else
        {
            printf("Неверный ввод. Повторите ввод.\n");
        }
    }
    return int_choice-1;
}

int menu(){
    char * choice = (char *) calloc(BUFLEN1, 1);
    int int_choice = -1;
    printf("------Хранилище информации о небоскребах мира------\n");
    printf("1 - Вывести все небоскребы\n");
    printf("2 - Вывести все небоскребы с группировкой по назначению\n");
    printf("3 - Вывести небоскребы с определенным назначением\n");
    printf("4 - Вывести все небоскребы с группировкой по региону\n");
    printf("5 - Вывести небоскребы с определенным регионом\n");
    printf("6 - Добавить небоскреб\n");
    printf("7 - Удалить небоскреб\n");
    printf("0 - Выход\n");
    while(true){
        fgets(choice, BUFLEN1, stdin);
        if (((*choice) >= '0') && (*choice <= '7') && (*(choice+2) == '\0'))        //Проверяем является ли первый символ нужным числом, а проверка на нуль-символ отбрасывает случаи, где ввод более двух символов, т.к.: choice[3] == '1\n\0'
        {
            int_choice = atoi(choice);
            free(choice);
            break;
        }
        else
        {
            printf("Неверный ввод. Введите корректный пункт меню.\n");
        }
    }
    return int_choice;
}



