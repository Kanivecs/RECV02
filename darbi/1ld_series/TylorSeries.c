#include<stdio.h>
 #include<math.h>
 double arc_sinuss ( double x ) {
 double a , S ;
 int k=0;

 a = (2*k)!*pow(x,2*k+1)/ pow(4,k)*pow((k!),2)*(2*k+1) ;
 S = a ;
 printf ( "%.2 f \ t %8.2 f \ t %8.2 f \n" , x , a , S) ;

 while ( k<500){
 k++;
 a = a ∗ pow(2*k*x,2*k)-pow(x,2*k)/8*k+4 ;
 S = S + a ;
 printf ( "%.2 f \ t %8.2 f \ t %8.2 f \n" , x , a , S) ;
 }
 return S ;
 }
 void main ( ) {
 double x =2.05 , y , yy ;
 y = arcsin ( x ) ;
 printf ( "standartafunkcija arcsin − y= arcsin (%.2 f )=%.2 f \n" , x , y ) ;

 yy = mans_sinuss ( x ) ;
 printf ( "lietotaja funkcija − y=arc_sinuss (%.2 f )=%.2 f \n", x , yy ) ;
 }
