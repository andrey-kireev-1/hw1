#include "../headers/headers.h"


void add_building(int *id, Buildings_list *list){
    Buildings building;
    int floors;
    double total_height;
    double spire_height;
    int usage_key;
    int region_key;
    printf("---Ввод нового небоскреба---\n");
    printf("(Введите 0 на первый вопрос, чтобы выйти)\n");
    printf("Введите количество этажей\n");
    floors = get_int(&floors);
    if (floors == 0){
        return;
    }
    printf("Введите высоту здания\n");
    total_height = get_double(total_height);
    printf("Введите высоту шпиля\n");
    spire_height = get_double(spire_height);
    usage_key = submenu_usage();
    region_key = submenu_region();
    building = change_values(building, id, floors, total_height, spire_height, usage_key, region_key);
    push(building, list);
    increase(id);
}