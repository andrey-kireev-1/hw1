#include "../headers/headers.h"
#include "../headers/global_arr.h"

char usage_arr[ARR_COUNT][BUFF_COUNT] = {"Офисный", "Гостиничный", "Спальный", "Правительственный", "Научный центр", "Торгово-развлекательный"};
char region_arr[ARR_COUNT][BUFF_COUNT] = {"Европа", "Ближний Восток", "Юго-Восточная Азия", "Северо-Западная Азия", "Северная Америка", "Южная Америка"};

int main()
{
    Buildings building;
    Buildings_list *list;
    Buildings_list *list2;
    int id = 1;
    int key;
    list = filling_list(&id, list);
    while (true)
    {
        switch (menu())
        {
        case 1:
            sort_list(&list, ID);
            print_list(list);
            break;
        case 2:
            list2 = list;
            sort_list(&list2, USAGE);
            print_list(list2);
            break;
        case 3:
            list2 = list;
            key = submenu_usage();
            sort_list(&list2, USAGE);
            print_list_group(list2, USAGE, key);
            break;
        case 4:
            list2 = list;
            sort_list(&list2, REGION);
            print_list(list2);
            break;
        case 5:
            list2 = list;
            key = submenu_region();
            sort_list(&list2, REGION);
            print_list_group(list2, REGION, key);
            break;
        case 6:
            add_building(&id, list);
            break;
        case 7:
            printf("Введите id небоскреба, который хотите удалить\n");
            printf("0 - выход.\n");
            key = get_int(&key);
            if (key == 0){
                break;
            }
            delete_building(key, list);
            break;
        case 0:
            printf("Выход . . .\n");
            free(list);
            
            return 0;
        default:
            free(list);
            
            printf("Выход . . .\n");
            return 0;
        }
    }
    return 0;
}