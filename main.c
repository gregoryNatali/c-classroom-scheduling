#include <stdio.h>
#include "lib/printMenu.h"
#include "lib/handleActions.h"

int main () {
  FILE *file;
  int action = 1;
  
  file = fopen("./data/salas.txt", "r");
  
  while (action != 0)
  {
  printMenu();
  printf("Acao: ");
  scanf("%d", &action);

  handleActions(action, file);
  }

  printf("Programa Encerrado!");
  
  return 0;
}