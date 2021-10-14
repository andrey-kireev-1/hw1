#include "../headers/headers.h"

Buildings_list *delete_building(int id, Buildings_list *list)
{
    Buildings_list *current, *previous;
    current = list;
    
    while(current) {
        if (current->data.id == id) {
            if (current == list) {
                if (list->next == NULL) {
                    free(current);
                    return list = NULL;
                }
                list = current->next;
                free(current);
                current = list;
            }
            else {
                if (current->next != NULL) {
                    previous->next = current->next;
                    free(current);
                    current = previous->next;
                }
                else {
                    previous->next = NULL;
                    free(current);
                    return list;
                }
            }
        }
        previous = current;
        current = previous->next;
    }
    if (list == current) list = current;
    return list;
}