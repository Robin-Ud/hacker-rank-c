#include <stdio.h>
#include <stdlib.h>

int main() {

  // inicio
  // criando a variavel que define o tamanho
  // e capturando o primeiro inteiro do buffer para dar valor a variavel
  int len = 0;
  scanf("%d", &len);

  // crio o array de acordo com o tamanho do primeiro %d
  // e crio tambem a variavel pra guardar a soma
  int *arr = (int *)malloc(sizeof(int) * len);
  long sum = 0;

  // depois de tudo preparado
  // inicio o loop salvando cada scan em uma posição do arr
  // e somando cada %d ao sum
  for (int i = 0; i < len; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
  };
  printf("%ld", sum);
  free(arr);
}
