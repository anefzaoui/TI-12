#include <stdio.h>
#include <conio.h>
main()
{
  int a,b;
  printf("donner un entier a \n");
  scanf("%d",&a);
  printf("donner un entier b \n");
  scanf("%d",&b);
if (a>b)
printf("a=%d est superieur a b=%d",a,b);
else if(a<b)
printf("a=%d est inferieur a b=%d",a,b);
else
printf("a=%d est egale a b=%d",a,b);

    
  
  getch(); 
       
       }

