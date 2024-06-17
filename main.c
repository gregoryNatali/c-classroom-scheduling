#include <stdio.h>
#include "lib/printMenu.h"

int main () {
  int action = 1;
  while (action != 0)
  {
  printMenu();
  printf("Ação: ");
  scanf("%d", &action);

  switch (action)
  {
  case 1:
    printf("Listar Salas");
    break;
  
  case 2:
    printf("Listar Reservas");
    break;

  case 3:
    printf("Reservas de uma sala");
    break;

  case 4:
    printf("Agendar Sala");
    break;

  case 5:
    printf("Cancelar Reserva");
    break;
  
  case 0:
  break;

  default:
  printf("\nAção Inválida! Insira novamente: ");
  scanf("%d", &action);
    break;
  }
  printf("Programa Encerrado!");
  }
  
  return 0;
}