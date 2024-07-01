#include <stdio.h>
#include <stdlib.h>

struct Classroom {
    int id;
    char name[8];
    char description[30];
    int capacity;
};

int main () {
  FILE *classroomsFile, *schedulesFile;
  struct Classroom *classrooms;
  int size = 0;
  int action = 1;
  
  classrooms = malloc(size * sizeof (struct Classroom));

  classroomsFile = fopen("./data/salas.txt", "r");
  // leitura dos dados das salas
  for (int i = 0; i < 8; i++)
  {
    size++;
    classrooms = (struct Classroom *) realloc(classrooms, sizeof(struct Classroom) * size);
    fscanf(classroomsFile, "%d %s %s %d", &classrooms[i].id, &classrooms[i].name, &classrooms[i].description, &classrooms[i].capacity);
  }
  // fechando o arquivo de salas
  fclose(classroomsFile);

  schedulesFile = fopen("./data/reservas.txt", "r");

  while (action != 0)
  {
    printf("\n------------------------n");
    printf("1 - Listar Salas\n");
    printf("2 - Listar Reservas\n");
    printf("3 - Reservas de uma sala\n");
    printf("4 - Agendar Sala\n");
    printf("5 - Cancelar Reserva\n");
    printf("0 - Encerrar Programa\n");
    printf("------------------------\n");
    
    printf("Acao: ");
    scanf("%d", &action);

    switch (action)
    {
      case 1:
        if(size == 0) {
          printf("Nenhuma sala registrada!\n");
          break;
        }

        for (int i = 0; i < size; i++)
        {
          printf("id: %d\n", classrooms[i].id);
          printf("name: %s\n", classrooms[i].name);
          printf("description: %s\n", classrooms[i].description);
          printf("capacity: %d\n", classrooms[i].capacity);
          printf("\n");
        }
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

  printf("Programa Encerrado!");
  
  return 0;
}