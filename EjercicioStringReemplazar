#include <stdio.h>
#include <stdio_ext.h>

void reemplazar(char* string, char caract);

int main(void) {
  char texto[200];
  char caract;
  printf("Introduzca una palabra \n");
  scanf("%s", texto);
  printf("Introduzca un caracter para reemplazarlo dentro del texto\n");
  __fpurge(stdin);
  scanf("%c", &caract);
  reemplazar(&texto[0], caract);
  printf("%s", texto);
}

void reemplazar (char* string, char caract){
  char A;
  printf("Introduzca el caracter que quiere cambiar dentro del texto\n");
  scanf("%c\n", &A);
  while((*string) !='\0'){
    if (caract==*string){
      *(string)=A;
    }
    string++;
  }
}
