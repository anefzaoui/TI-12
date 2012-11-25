#include <stdio.h>
#include <conio.h>

main()
{
   int  s,h,m,nbr;
   printf("donner le nombre ");
   scanf("%d",&nbr);
   h=nbr/3600;
   m=(nbr %3600)/60;
   s=nbr %60 ;
   printf("Dans %d il ya %d heures, %d minutes et %d secondes" , nbr,h,m,s);
   getch();  



}
 
