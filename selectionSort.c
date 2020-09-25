#include<stdio.h>
#include<stdlib.h>

int main(){
  int unsorted[6]= {8,1,7,2,6,4};

  int i,l, minIndex, aux, arraySize;

  arraySize = sizeof(unsorted) / sizeof(int);

  for(int l = 0; l < arraySize - 1; l++){
    minIndex = l;
    for(int i = l + 1; i < arraySize; i++){
      if(unsorted[i] < unsorted[minIndex]){
        minIndex = i;
      }
    }

    if(unsorted[minIndex] < unsorted[l]){
      aux = unsorted[l];
      unsorted[l] = unsorted[minIndex];
      unsorted[minIndex] = aux;
    }
  }

  for(l = 0; l < sizeof(unsorted) / sizeof(int); l++){
    printf("\nO resultado final, foi %d \n", unsorted[l]);
  }

  return 0;
}
