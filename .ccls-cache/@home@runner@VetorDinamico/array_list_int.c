/**
 *  \file array_list_int.c C dynamic array of int values library
 *
 * \author
 * \date
 *
 */

#include "array_list_int.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * \brief Struct to store dynamic array.
 *
 */
struct array_list_int {
    int * data;
    unsigned int size,capacity;
};

/**
 * \brief Increases int list capacity 
 * 
 * \return A boolean indicating if the capacity was increased.
 * \todo Implement function
 */

int increase_memory(array_list_int *list){
  int error;
  printf("size before %d\n", array_list_size(list));
  array_list_int *new_list = (array_list_int*)malloc(sizeof(array_list_int));
  new_list->data = (int*)malloc(sizeof(int)*(list->capacity*2));
  new_list->size = array_list_size(list);
  new_list->capacity = list->capacity*2;

  for(int i = 0; i<array_list_size(list); i++){
    array_list_push_back(new_list,array_list_get(list,i,&error));
  }

  //array_list_pop_back(list);
  //array_list_pop_back(new_list);

 // free(list->data);
  //list->data = new_list->data;
 // new_list->data = NULL;

  //for(int i = 0; i<array_list_size(list); i++){
  //  printf("cool: %d\n", array_list_get(list,i,&error));
  //}
  
  printf("size after %d\n", array_list_size(new_list));
  
  return 0;
}


array_list_int * array_list_create(){
    array_list_int *new_list = (array_list_int*)malloc(sizeof(array_list_int));
    if (new_list==0) /* Could not allocate memory forlist */
      return 0;
    new_list->data = (int*)malloc(sizeof(int)*8);
    if (new_list->data==0){ /* Could not allocate memory for list data */
      free(new_list);
      return 0;
    }
    new_list->size=0;
    new_list->capacity = 8;
    return new_list;
}


int array_list_get(array_list_int * list, int index, int *error){
    *error=0;
    if (index<0 || index>=list->size){
        *error=1;
        return 0;
    }
    return list->data[index];
}


unsigned int array_list_push_back(array_list_int * list, int value){
  if (list->capacity==list->size){
    if (!increase_memory(list))
      return array_list_size(list);
  }
  list->data[list->size] = value;
  list->size++;
  return array_list_size(list);
}


unsigned int array_list_pop_back(array_list_int * list){
  return array_list_size(list);
}


unsigned int array_list_size(array_list_int * list){
    return list->size;
}


/**
 * \todo Implement function
 */
int array_list_find(array_list_int * list, int element){
  
  return -1;
}


/**
 * \todo Implement function
 */
unsigned int array_list_insert_at(array_list_int * list, int index, int value){
    return array_list_size(list);
}

/**
 * \todo Implement function
 */
unsigned int array_list_remove_from(array_list_int * list, int index){
  return array_list_size(list);
}



unsigned int array_list_capacity(array_list_int * list){
  return list->capacity;
}


/**
 * \todo Implement function
 */
double array_list_percent_occupied(array_list_int * list){
  return 0.0;
}


/**
 * \todo Implement function
 */
void array_list_destroy(array_list_int * list){
  
}
