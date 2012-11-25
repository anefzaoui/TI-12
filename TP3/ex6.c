#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{

      int a,b ;
      printf("donner a\n");
      scanf("%d",&a);
      printf("donner b\n");
      scanf("%d",&b);   
      if((a>=0) && (b>=0))
      printf("Signe +");
      else if((a<=0) && (b<=0))
      printf("signe -");
      else if((fabs(a)>fabs(b)) && (a<=0))
      printf("singe -");                   
      else if((fabs(a)>fabs(b)) && (b<=0))
      printf("Signe +");  
      else if((fabs(a)<fabs(b)) && (a<=0))
      printf("signe +");  
      else if((fabs(a)<fabs(b)) && (b<=0))
      printf("signe -");  
      

          
  getch(); 
       
       }

      
