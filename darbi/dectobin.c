#include <stdio.h>

int main(void) {
  char num;
  printf("Ievadi naturālu skaitli: ");
  scanf("%hhd", &num);

  for (int i = 7; i >= 0; i--) {
    printf("%d",(num >> i) & 1);
  }
  printf("\n");
  return 0;
}
