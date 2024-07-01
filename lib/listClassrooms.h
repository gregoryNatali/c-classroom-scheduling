#include <stdio.h>
#include "classroomStruct.h"

void listClassrooms(FILE *file) {
  // char thrash[100];

  // Classroom classrooms[8];

    char str[128];
    int result;

    do {
        result = fscanf(file, "%127[^;\n]", str);

        if(result == 0)
        {
            result = fscanf(file, "%*c");
        }
        else
        {
            //Put here whatever you want to do with your value.
            printf("%s\n", str);
        }

    } while(result != EOF);
  
}