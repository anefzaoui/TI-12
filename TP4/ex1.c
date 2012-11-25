#include <stdio.h>
#include <conio.h>

main(){
       int i,n;
       printf("Donner un nombre");
       scanf("%d",&n);
       for(i=1;i<=10;i++)
       {
       printf("\n %d*%d=%d",n,i,n*i);       
       }
       getch();       
       }
