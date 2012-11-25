#include <stdio.h>
#include <conio.h>
main()
{
  int a,b;
  printf("donner a\n");
  scanf("%d",&a);
  printf("donner b\n");
  scanf("%d",&b);
  
  if(a>b) printf("premier choix \n");
  else if (a>10) printf("deuxiéme choix\n");
  if (b<10) printf ("troisiéme choix\n");
  else printf ("quatriéme choix \n");
  getch(); 
       
       }

