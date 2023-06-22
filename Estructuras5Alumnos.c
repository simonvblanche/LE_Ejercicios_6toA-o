#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

#define CAN 5

struct alumno {
  char Nombre[30];
  char Apellido[30];
  unsigned int Edad;
  char GS[10];
  unsigned int Anio;
}Alumno[CAN];    

void Encontrar (struct alumno*); 

int main(void) {
  char i;
  char a=0;
  for (i=0; i<5; i++){
    printf("Escriba el nombre del alumno %d\n", a+1);
    __fpurge(stdin);
    scanf("%s", Alumno[a].Nombre);
    printf("Escriba el apellido del alumno %d\n", a+1);
    __fpurge(stdin);
    scanf("%s", Alumno[a].Apellido);
    printf("Escriba la edad del alumno %d\n", a+1);
    __fpurge(stdin);
    scanf("%d", &Alumno[a].Edad);
    printf("Escriba el grupo sanguineo del alumno %d\n", a+1);
    __fpurge(stdin);
    scanf("%s", Alumno[a].GS);
    printf("Escriba el año del alumno %d\n", a+1);
    __fpurge(stdin);
    scanf("%d", &Alumno[a].Anio);
    a++;
  }
  Encontrar(Alumno);
}

void Encontrar (struct alumno *Alumnos){
  char N[30];
  unsigned char op;
  char b=-1;
  char a=1;
  char c;
  while (a==1){
    printf("¿Cual es el nombre del alumno que quiere encontrar?");
    __fpurge(stdin);
    scanf("%s", N);
    while(a==1){
      b++;
      if(strcmp(N, Alumno[b].Nombre) == 0){
        printf("\nSi quiere saber la edad presione E, si el apellido presione A, si quiere el grupo sanguineo presione G, si quiere el año, presione O\n");
        __fpurge(stdin);
        scanf("%c", &op);
        switch (op) {
          case ('E'):
                    printf("%d", Alumno[b].Edad);
                    break;
          case ('A'):
                    printf("%s",Alumno[b].Apellido);
                    break;
          case ('G'):
                    printf("%s", Alumno[b].GS);
                      break;
          case ('O'):
                    printf("%d", Alumno[b].Anio);
                    break;
        }
        break;
      }else if (strcmp(N, Alumno[b].Nombre) == 1){
      }else{
        printf("No hay alumno");
      }
    }
      printf("\nSi quiere ver otro datos de los alumnos presione 1, sino presione 0\n");
      scanf("%d", &c);
      if (c!=a){
        a=c;
      }else if (c==a);
  }
}
