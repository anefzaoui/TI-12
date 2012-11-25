#include<stdio.h>
#include<conio.h>
main ()
{
     int TVA,PNET; 
  double   pbrute;
   printf("Donner la valeur TVA : ");
   scanf("%d",&TVA);
   printf("Donner la valeur pnet : ");
   scanf("%d",&PNET);
   pbrute=PNET+PNET *(TVA/100);
   printf("La prix brute d'un article est %f",pbrute);
   getch();
} 
     
