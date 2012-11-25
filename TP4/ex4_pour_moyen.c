#include <stdio.h>
#include <conio.h>

main(){
       int i,s,n;
       s=1;
       printf("Donner un nombre : ");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
       s=s*i;
       
       }
       printf("La somme de ces valeurs est : %d",s);
       getch();       
       }
