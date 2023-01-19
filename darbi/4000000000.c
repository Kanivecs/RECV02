#include <stdio.h>

int main ()
{
  unsigned long long int  a, b, result;
  printf(" Ievadi divus skaitļus! \n" );
  scanf("%llu %llu" , &a , &b);
  
  result = a * b ;
  
  printf(" Skaitļu reizinājums = %llu \n ", result );

  return 0;
}
