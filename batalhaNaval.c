#include<stdio.h>
#include<stdlib.h>

void exibirTrofeu() {
      printf("       ___________      \n");
  		printf("      '._==_==_=_.'     \n");
  		printf("      .-\\:      /-.    \n");
  		printf("     | (|:.     |) |    \n");
  		printf("      '-|:.     |-'     \n");
  		printf("        \\::.    /      \n");
  		printf("         '::. .'        \n");
  		printf("           ) (          \n");
  		printf("         _.' '._        \n");
  		printf("        '-------'       \n\n");
}

void exibirTiroErrado() {
    printf("    _______________         \n");
		printf("   /               \\       \n");
		printf("  /                 \\      \n");
		printf("//                   \\/\\  \n");
		printf("\\|   XXXX     XXXX   | /   \n");
		printf(" |   XXXX     XXXX   |/     \n");
		printf(" |   XXX       XXX   |      \n");
		printf(" |                   |      \n");
		printf(" \\__      XXX      __/     \n");
		printf("   |\\     XXX     /|       \n");
		printf("   | |           | |        \n");
		printf("   | I I I I I I I |        \n");
		printf("   |  I I I I I I  |        \n");
		printf("   \\_             _/       \n");
		printf("     \\_         _/         \n");
		printf("       \\_______/           \n");
}

int main(){
  char matriz[3][3];
  int line = 0;
  int column = 0;
  int boatPositionLine, boatPositionColumn, shotPositionLine, shotPositionColumn;


  for(line = 0; line < 3; line++){
    for(column = 0; column < 3; column++) {
      matriz[line][column] = '~';
    }
  }

  printf("informe a linha do barco: ");
  scanf("%d", &boatPositionLine);
  printf("informe a coluna do barco: ");
  scanf("%d", &boatPositionColumn);

  for(;;) {
    printf("Bang, escolha a linha do tiro: ");
    scanf("%d", &shotPositionLine);
    printf("Bang, escolha a coluna do tiro: ");
    scanf("%d", &shotPositionColumn);

    if(boatPositionLine == shotPositionLine){
      if(boatPositionColumn == shotPositionColumn){
        printf("Parabéns, você acertou o barco!\n");
        exibirTrofeu();
        break;
        return 0;
      }else{
        printf("\nTirou na agua :( \n");
        matriz[shotPositionLine][shotPositionColumn] = '*';
        exibirTiroErrado();
      }
    }else{
      printf("\nTirou na agua :( \n");
      matriz[shotPositionLine][shotPositionColumn] = '*';
      exibirTiroErrado();
    }

    for(line = 0; line < 3; line++){
        printf("%c %c %c \n", matriz[line][0], matriz[line][1], matriz[line][2]);
    }

  }

  return 0;
}
