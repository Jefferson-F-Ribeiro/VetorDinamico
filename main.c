#include <stdio.h>
#include "array_list_int.h"

int main(void) {
  int erro, i;
  
  array_list_int *lista = array_list_create();
  /*printf("%d\n",array_list_size(lista));
  array_list_push_back(lista,10);
  printf("%d\n",array_list_size(lista));
  printf("%d\n",array_list_get(lista,0,&erro));*/

  for(i=0;i<8;i++){
    array_list_insert_at(lista,i,i*2);
  }

  for(i=0;i<8;i++){
    printf("%d\n",array_list_get(lista,i,&erro));
  }


  increase_memory(lista);
  printf("ocupado %f\n",array_list_percent_occupied(lista));


 /* for(i=0;i<16;i++){
    printf("%d\n",array_list_get(lista,i,&erro));
  }

  increase_memory(lista);
  printf("ocupado %f",array_list_percent_occupied(lista));
*/
  array_list_insert_at(lista,9,66);
  
  for(int j = 0;j<array_list_get_capacity(lista);j++){
  printf("%d ", array_list_get(lista,j,&erro));
  }

  //printf("achou?: %d", array_list_find(lista,4));
  //printf("achou?: %d", array_list_find(lista,64)); 
  return 0;
}