#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

int main(){
  int unsorted[9]= {56,2,132,5, 1,9,7,16,9};
  bool swapped = true;

  int i,l;

  for(int i = 0; i < sizeof(unsorted) / sizeof(int); i++){
    swapped = false;

    for(int j = 0; j < sizeof(unsorted) / sizeof(int); j++){
      int initial = unsorted[j];
      if(initial > unsorted[j+1]){
        int aux = initial;
        unsorted[j] = unsorted[j+1];
        unsorted[j+1] = aux;
        swapped = true;
      }
    }
    if(!swapped){
      break;
    }
  }

  for(l = 0; l < sizeof(unsorted) / sizeof(int); l++){
    printf("O resultado final, foi %d \n", unsorted[l]);
  }

  return 0;
}
