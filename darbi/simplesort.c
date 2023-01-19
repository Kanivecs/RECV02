#include <stdio.h>

int main(void)
{
  int num1, num2, num3;
  char order[10];

  printf("Ievadi trīs decimālskaitļus: ");
  scanf("%d%d%d", &num1, &num2, &num3);

  printf("Ievadi, kādā secībā tu vēlies šos skaitļus - augošā vai dilstošā :  ");
  scanf("%s", order);
  if (strcmp(order, "augošā") == 0)
  {
    int temp;
    if (num1 > num2) 
    {
      temp = num1;
      num1 = num2;
      num2 = temp;
    }
    if (num1 > num3) 
    {
      temp = num1;
      num1 = num3;
      num3 = temp;
    }
    if (num2 > num3) 
    {
      temp = num2;
      num2 = num3;
      num3 = temp;
    }
  } 
  else if (strcmp(order, "dilstošā") == 0)
  {
    int temp;
    if (num1 < num2) 
    {
      temp = num1;
      num1 = num2;
      num2 = temp;
    }
    if (num1 < num3) 
    {
      temp = num1;
      num1 = num3;
      num3 = temp;
    }
    if (num2 < num3) 
    {
      temp = num2;
      num2 = num3;
      num3 = temp;
    }
  } else {
    printf("Nepareizi specificēta secība.\n");
    return 1;
  }

  printf("Skaitļi Jūsu izvēlētajā secībā ir: %d %d %d\n", num1, num2, num3);
  return 0;
}
