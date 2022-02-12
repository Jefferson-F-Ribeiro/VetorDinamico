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
    array_list_push_back(lista,i*2);
  }

  for(i=0;i<8;i++){
    printf("%d\n",array_list_get(lista,i,&erro));
  }


  increase_memory(lista);



  for(i=0;i<16;i++){
    printf("%d\n",array_list_get(lista,i,&erro));
  }

  return 0;
}