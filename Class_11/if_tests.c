// nosacījuma operators if tiek izmantots koda izpildes sazarošani
// if(izteiksme) darbība_1_gab:
// if(izteiksme)
// darbība_1_gab;
// nozīmē sekojošo  - darbība_1gab) tiks izpildīta tad, kad
// 	    	      izteiksmes izpildīšanas rezultāts ir "true"
//		      par "true" nozīmi skatīt iepriekšējo nodarbību
// if(izteiksme) {1_darbība; 2_dabība;..... } 
// if(izteiksme)
// {
//  1_darbība;
//  2__dabība;
//  ..... 
// } 

//  if(izteiksme) darbība_1_gab;
//  else
//      savādāka_ darbība_1_gab;


// else vienmēr pieder kādam "if" un atrodas vienas darbība, vai darbību bloka attālumā no "if"
//   un tam nav pāŗbaudāma izteiksme 
// ja vajag kautko "elif" veidīgu

// if (izteiksme)
//{
//;   - tukšs operators, neko nedara bet nedaudz patērē laiku
//}
//else
//{
//{if (izteiksme)
//{
//;
//}
//}
#include <stdio.h>

int main()

{
int a,b;
printf("Cienījamais lietotāj, lūdzu ievadīt divus skaitļus: ");
scanf("%d",&a);
scanf("%d",&b);

if (a>b)
{
printf("Tavs ievadītais a(%d) ir lielāks par ievadīto b(%d)\n",a,b);
}

else
{
printf("Tavs ievadītais a(%d) nav lielāks par ievadīto b(%d)\n",a,b);
if(a==b)
 printf("Vēl vairāk a(%d)ir vienāds ar b(%d)\n",a,b);
else 
 printf("Vēl vairāk a(%d) ir mazāks par b(%d)\n",a,b);
}
return 0;
}
