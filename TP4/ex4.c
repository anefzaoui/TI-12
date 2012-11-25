#include <stdio.h>
#include <conio.h>

main(){
       int i,n,a,c;
       c=1;
       printf("Donner un nombre : ");
       scanf("%d",&n);
       printf("Donner ça puissance : ");
       scanf("%d",&a);
       for(i=1;i<=a;i++)
       {
       c=n*c;
       }
       printf("%d",c);
       getch();       
       }
