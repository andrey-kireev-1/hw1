extern "C"{
#include "../headers/headers.h"
#include "../functions/create_list.c"
}
#include <gtest/gtest.h>

TEST(IncreaseTest, test1) { 
    int a = 5;
    int *p;
    p = &a;
    ASSERT_EQ(6, increase(p));
    a = 110;
    ASSERT_EQ(111, increase(p));
    a = -12;
    ASSERT_EQ(-11, increase(p));
    a = 32000;
    ASSERT_EQ(32001, increase(p));
}

TEST(CreateTest, test2){
    Buildings building_check = {12, 40, 356.5, 10.7, 0, 0};
    Buildings_list *list_check = (Buildings_list*)malloc(sizeof(Buildings_list));
    list_check -> data = building_check;
    list_check -> next = NULL;
    ASSERT_EQ(list_check -> data.id, create(building_check) -> data.id);
    ASSERT_EQ(list_check -> data.total_height, create(building_check) -> data.total_height);
    ASSERT_EQ(list_check -> data.spire_height, create(building_check) -> data.spire_height);
    ASSERT_EQ(list_check -> data.usage_key, create(building_check) -> data.usage_key);
    ASSERT_EQ(list_check -> data.region_key, create(building_check) -> data.region_key);
    free (list_check);
    Buildings building_check2 = {123, 423, 1234.8, 120.1, 1, 2};
    Buildings_list *list_check2 = (Buildings_list*)malloc(sizeof(Buildings_list));
    list_check2 -> data = building_check2;
    list_check2 -> next = NULL;
    ASSERT_EQ(list_check2 -> data.id, create(building_check2) -> data.id);
    ASSERT_EQ(list_check2 -> data.total_height, create(building_check2) -> data.total_height);
    ASSERT_EQ(list_check2 -> data.spire_height, create(building_check2) -> data.spire_height);
    ASSERT_EQ(list_check2 -> data.usage_key, create(building_check2) -> data.usage_key);
    ASSERT_EQ(list_check2 -> data.region_key, create(building_check2) -> data.region_key);
    free (list_check2);
}

TEST(ChageValuesTest, test3){
    Buildings building_check = {123, 54, 523.5, 21.7, 5, 2};
    Buildings building_test;
    int a = 123;
    building_test = change_values(building_test, &a, 54, 523.5, 21.7, 5, 2);
    ASSERT_EQ(building_check.id, building_test.id);
    ASSERT_EQ(building_check.total_height, building_test.total_height);
    ASSERT_EQ(building_check.spire_height, building_test.spire_height);
    ASSERT_EQ(building_check.usage_key, building_test.usage_key);
    ASSERT_EQ(building_check.region_key, building_test.region_key);

}

int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}