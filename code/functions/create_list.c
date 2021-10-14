#include "../headers/headers.h"


int increase(int *id){
    *id = (*id) + 1;
    return(*id);
}

void push(Buildings data, Buildings_list *list)
{
    Buildings_list *new_building_element = (Buildings_list*)malloc(sizeof(Buildings_list));
    new_building_element -> data = data;
    new_building_element -> next = NULL;
    Buildings_list *p = list;
    while (p -> next != NULL){
        p = p -> next;
    }
    p -> next = new_building_element;
}

Buildings_list *create(Buildings data){
    Buildings_list *head_building = (Buildings_list*)malloc(sizeof(Buildings_list));
    head_building -> data = data;
    head_building -> next = NULL;
    return(head_building);
}

Buildings change_values (Buildings building, int *id, int floors_numbers, double total_height, double spire_height, int usage_key, int region_key){
    building.id = *id;
    building.floors_numbers = floors_numbers;
    building.total_height = total_height;
    building.spire_height = spire_height;
    building.usage_key = usage_key;
    building.region_key = region_key;
    return building;
}

Buildings_list *filling_list(int *id, Buildings_list *list){
    Buildings building = {*id, 40, 356.5, 10.7, 0, 0};
    list = create(building);
    increase(id);
    building = change_values(building, id, 34, 320.1, 8.4, 3, 3);
    push(building, list);
    increase(id);
    building = change_values(building, id, 67, 680.7, 43.2, 4, 1);
    push(building, list);
    increase(id);
    building = change_values(building, id, 63, 633.0, 36.6, 0, 5);
    push(building, list);
    increase(id);
    building = change_values(building, id, 49, 480.55, 50.35, 5, 3);
    push(building, list);
    increase(id);
    building = change_values(building, id, 29, 280.8, 7.0, 2, 4);
    push(building, list);
    increase(id);
    building = change_values(building, id, 58, 545.76, 21.4, 1, 2);
    push(building, list);
    increase(id);
    building = change_values(building, id, 43, 511.0, 17.8, 3, 0);
    push(building, list);
    increase(id);
    return list;
}