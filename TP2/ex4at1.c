#include <stdio.h>
#include <conio.h>

main()
{
int c=2;
int nbr,reste,quotient;
     printf("Donner un entier\n"); 
     scanf("%d",&nbr);
     quotient=nbr / c ;
     printf("%d\n",quotient);
     reste=nbr % c;
     printf("%d \n",reste);
printf("le quotient de la division de %d avec %d = ",nbr,c);
printf("%d",quotient);
printf(" et reste = %d",reste);

     
          getch();
}
 
