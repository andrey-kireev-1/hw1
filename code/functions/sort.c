#include "../headers/headers.h"

void sort_list(Buildings_list** pointer_list, int flag)           //Функция сортировки односвязного списка пузырьком. Получает на вход указатель на весь односвязный список.
{
    int count_lists = 0;                                //Счетчик элементов в списке
    Buildings_list** pointer_list_copy = NULL;          //Заполняемый нами отсортируемый(в будущем) дубликат указателя на список
    Buildings_list* tmp;                                //Временный элемент списка
    
    tmp=*pointer_list; 
    while(tmp != NULL)                                  //Подсчет всего количества элементов в односвязном списке
    {
        count_lists = count_lists+1;
        tmp = tmp->next;
    }
    int i = 0;
    int j = 0;
    if(count_lists != 0)                                //Начало сотрировки
    {
        pointer_list_copy = malloc(count_lists * sizeof(*pointer_list_copy));                           //Выделяем количество памяти для дубликата списка
        i = 0;
        
        tmp = *pointer_list;
        while(tmp != NULL)                                                                              //Копируем элементы списка в дубликат
        {
            pointer_list_copy[i] = tmp;
            i = i + 1;
            tmp = tmp->next;
        }
        for(i = 0; i < count_lists;  i++)                                                               //Сортировка пузырьком
        {
            for(j = 0; j < count_lists - 1; j++)
            {   
                if (flag == 0){
                    if((pointer_list_copy[j]->data.id) > (pointer_list_copy[j+1]->data.id))   //Ключ назначения здания
                    {
                        tmp = pointer_list_copy[j];
                        pointer_list_copy[j] = pointer_list_copy[j+1];
                        pointer_list_copy[j+1] = tmp;
                    }
                }
                if (flag == 1){
                    if((pointer_list_copy[j]->data.usage_key) > (pointer_list_copy[j+1]->data.usage_key))   //Ключ назначения здания
                    {
                        tmp = pointer_list_copy[j];
                        pointer_list_copy[j] = pointer_list_copy[j+1];
                        pointer_list_copy[j+1] = tmp;
                    }
                }
                if (flag == 2){
                    if((pointer_list_copy[j]->data.region_key) > (pointer_list_copy[j+1]->data.region_key))   //Ключ назначения здания
                    {
                        tmp = pointer_list_copy[j];
                        pointer_list_copy[j] = pointer_list_copy[j+1];
                        pointer_list_copy[j+1] = tmp;
                    }
                }
            }
        }
        i = 0;
        while (i < count_lists) {                                                          //Вернем дубликат в состояние односвязного списка
            pointer_list_copy[i]->next = pointer_list_copy[i+1];
            if (i == count_lists-1){
                pointer_list_copy[count_lists-1]->next = NULL;
            }
            i++;
        }
        pointer_list = pointer_list_copy;
        free(pointer_list_copy);
    }
}