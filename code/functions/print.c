#include "../headers/headers.h"
#include "../headers/global_arr.h"



void print_list(Buildings_list *list)
{
    Buildings_list *p = list;
    do 
    {
        printf("Небоскреб №%d\n", p->data.id);
        printf("\tКоличество этажей: %d\n", p->data.floors_numbers);
        printf("\tВысота здания: %.2f м\n", p->data.total_height);
        printf("\tВысота шпиля: %.2f м\n", p->data.spire_height);
        printf("\tНазначение небоскреба: %s\n", usage_arr[p->data.usage_key]);
        printf("\tРегион небоскреба: %s\n\n", region_arr[p->data.region_key]);
        p = p -> next;
    } while (p != NULL);
}

void print_list_group(Buildings_list *list, int flag, int key)
{
    Buildings_list *p = list;
    if (flag == 1){
        printf("Небоскребы по назначению: %s\n\n", usage_arr[key]);
        do 
        {
        if (key == p->data.usage_key){
            printf("Небоскреб №%d\n", p->data.id);
            printf("\tКоличество этажей: %d\n", p->data.floors_numbers);
            printf("\tВысота здания: %.2f м\n", p->data.total_height);
            printf("\tВысота шпиля: %.2f м\n", p->data.spire_height);
            printf("\tНазначение небоскреба: %s\n", usage_arr[p->data.usage_key]);
            printf("\tРегион небоскреба: %s\n\n", region_arr[p->data.region_key]);
            p = p -> next; 
        } else {
            p = p -> next;
        }
        } while (p != NULL);
    }
    if (flag == 2){
        printf("Небоскребы по региону: %s\n\n", region_arr[key]);
        do 
        {
        if (key == p->data.region_key){
            printf("Небоскреб №%d\n", p->data.id);
            printf("\tКоличество этажей: %d\n", p->data.floors_numbers);
            printf("\tВысота здания: %.2f м\n", p->data.total_height);
            printf("\tВысота шпиля: %.2f м\n", p->data.spire_height);
            printf("\tНазначение небоскреба: %s\n", usage_arr[p->data.usage_key]);
            printf("\tРегион небоскреба: %s\n\n", region_arr[p->data.region_key]);
            p = p -> next; 
        } else {
            p = p -> next;
        }
        } while (p != NULL);
    }
}