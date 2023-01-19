#include <stdio.h>
#include <limits.h>



int main()
{
    printf("Ievadi decimālskaitli: ");
    double n;
    scanf("%lf", &n);
    
if (n < 0)
    {
        printf("Negatīva skaitļa faktoriāls nav definēts.\n");
        return 0;
    }


    printf("Izvēlies datu tipu (char, int, long long): ");
    char data_type[10];
    scanf("%s", data_type);
    
  

    if (strcmp(data_type, "char") == 0)
    {
        char result = 1;
        int i = 1;
        while (i <= n)
        {
            if (result > CHAR_MAX / i)
            {
                printf("Error: Nav iespējams aprēķināt faktoriālu izmantojot char datu tipu.\n");
                return 0;
            }
            result *= i;
            i++;
        }

        printf("The factorial of %lf is %d\n", n, result);
    }
    else if (strcmp(data_type, "int") == 0)
    {
        int result = 1;
        int i = 1;
        while (i <= n)
        {
            if (result > INT_MAX / i)
            {
                printf("Error: Nav iespējams aprēķināt faktoriālu izmantojot int datu tipu.\n");
                return 0;
            }
            result *= i;
            i++;
        }

        printf("The factorial of %lf is %d\n", n, result);
    }
    else if (strcmp(data_type, "long long") == 0)
    {
        long long result = 1;
        int i = 1;
        while (i <= n)
        {
            if (result > LLONG_MAX / i)
            {
                printf("Error: Nav iespējams aprēķināt faktoriālu izmantojot long long datu tipu.\n");
                return 0;
            }
            result *= i;
            i++;
        }

        printf("The factorial of %lf is %lld\n", n, result);
    }
    else
    {
        printf("Error: Nepareizs datu tips.\n");
    }

    return 0;
}
