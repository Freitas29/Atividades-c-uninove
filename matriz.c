#include<stdio.h>
#include<stdlib.h>

int main(){
  int matriz[3][3];
  int line = 0;
  int column = 0;
  int value;
  int max;
  int initial;

  for(line = 0; line < 3; line++){
    for(column = 0; column < 3; column++){
      fflush(stdin);
      printf("Digite um valor: ");
      scanf("%d", &value);
      matriz[line][column] = value;
    }
  }

  for (line = 0; line < 3; line++){
    for(column = 0; column < 3;column++){
      initial = matriz[line][column];
      if(initial > max){
        max = matriz[line][column];
      }
    }
  }

  printf("o maior valor foi %d", max);

  return 0;
}
