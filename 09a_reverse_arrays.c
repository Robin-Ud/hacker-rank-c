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
  int tmp = 0, rig = (num - 1), lef = 0;
  while (lef < rig) {
    tmp = arr[lef];
    arr[lef] = arr[rig];
    arr[rig] = tmp;
    rig--;
    lef++;
  }
  /* fim da minha logica    */

  for (i = 0; i < num; i++) {
    printf("%d ", *(arr + i));
  }
  free(arr);
  return 0;
}
