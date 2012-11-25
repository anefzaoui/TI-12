#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{

      int n;
      printf("donner une annee :");
      scanf("%d",&n);
      if((n%4==0)&&(n%100!=0)||(n%400==0))
      printf("%d est bissextile",n);
      else
      printf("%d n'est pas bissextile",n);
      getch(); 
       
}

      
