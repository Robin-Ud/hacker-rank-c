#include <stdio.h>
#include <stdlib.h>

int main() {
  // logica que monta o array, semelhante ao exercicio 08
  int num, *arr, i;
  scanf("%d", &num);
  arr = (int *)malloc(num * sizeof(int));
  for (i = 0; i < num; i++) {
    scanf("%d", arr + i);
  }

  /* inicio da minha logica */
  int *rarray = (int *)malloc(sizeof(int) * num);
  for (i = 0; i < num; i++) {
    rarray[num - 1 - (i)] = arr[i];
  }
  /* fim da minha logica    */

  for (i = 0; i < num; i++)
    printf("%d ", *(arr + i));
  free(arr);
  free(rarray);
  return 0;
}
