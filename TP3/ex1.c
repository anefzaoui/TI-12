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
  else if (a>10) printf("deuxi�me choix\n");
  if (b<10) printf ("troisi�me choix\n");
  else printf ("quatri�me choix \n");
  getch(); 
       
       }

