#pragma once
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFLEN1 40
#define ID 0
#define USAGE 1
#define REGION 2
#define ARR_COUNT 6
#define BUFF_COUNT 50


typedef struct building
{
    int id;
    int floors_numbers;
    double total_height;
    double spire_height;
    int usage_key;
    int region_key;
} Buildings;

typedef struct buildings_list
{
    Buildings data;
    struct buildings_list *next;
} Buildings_list;

int increase(int *id);
int menu();
int submenu_usage();
int submenu_region();
Buildings_list *create(Buildings data);
Buildings change_values (Buildings building, int *id, int floors_numbers, double total_height, double spire_height, int usage_key, int region_key);
int get_int(int *number);
double get_double(double number);
void push(Buildings data, Buildings_list *list);
void add_building(int *id, Buildings_list *list);
void sort_list(Buildings_list** pointer_list, int flag);
void print_list(Buildings_list *list);
void print_list_group(Buildings_list *list, int flag, int key);
Buildings_list *delete_building(int id, Buildings_list *list);
Buildings_list *filling_list(int *id, Buildings_list *list);