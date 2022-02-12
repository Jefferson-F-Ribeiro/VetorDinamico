#include <stdio.h>
#include "array_list_int.h"

int main(void) {
  int erro;
  
  array_list_int *lista = array_list_create();
  printf("%d\n",array_list_size(lista));
  array_list_push_back(lista,10);
  printf("%d\n",array_list_size(lista));
  printf("%d\n",array_list_get(lista,0,&erro));
  return 0;
}