#include <stdio.h>
#include <stdlib.h>


int main(void){
  // 1. Déclaration de variable 
  int age = 20;
  float taille = 1.85;
  char initiale = 'E';

  //. Spécificateur qui permette au variable de se déclarer : (%d, %f, %c)

  int note;
  printf("Entre une note sur 20: ");
  scanf("%d", &note);  //. le & est l'adresse mémoire de la variable

  printf("tu as saisi: %d/20\n", note);
  return EXIT_SUCCESS;

}
