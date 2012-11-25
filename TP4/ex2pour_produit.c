#include <stdio.h>
#include <conio.h>

main(){
       int i,n,a,c;
       c=1;
       printf("Donner un nombre : ");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
       printf("\nDonner le valeur numero %d : ",i);       
       scanf("%d",&a);
       c=c*a;
       }
       printf("La somme de ces valeurs est : %d",c);
       getch();       
       }
