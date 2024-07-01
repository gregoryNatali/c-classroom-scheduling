#include <stdio.h>
#include "listClassrooms.h"

void handleActions(int action, FILE *file) {
    switch (action)
  {
  case 1:
    listClassrooms(file);
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
}