#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char *s;
  s = malloc(1024 * sizeof(char));
  scanf("%[^\n]", s);
  s = realloc(s, strlen(s) + 1);
  // Write your logic to print the tokens of the sentence here.
  /*
  minha explicação do strtok
  a função quebra a string em cada ocorrencia do segundo argumenro
  simultaneamente ela retorna o intervalo entre a ultima quebra e a atual
   */
  char *token = strtok(s, " ");
  while (token != NULL) {
    printf("%s\n", token);
    token = strtok(NULL, " ");
  }

  return 0;
}
