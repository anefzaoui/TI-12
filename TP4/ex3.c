#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
      int a,b,c;
      float d,x1,x2;
      printf("donner a\n");
      scanf("%d",&a);
      printf("donner b\n");
      scanf("%d",&b);
      printf("donner c\n");
      scanf("%d",&c);
      d=b*b-4*a*c;
if(a!=0){
            if(d>0)        {
              x1=(-b+sqrt(d))/2*a;
              printf("\nX1 = %f",x1);
              x2=(-b-sqrt(d))/2*a;;
              printf("\nX2 = %f",x2);
                           }
            else if (d<0) {
              printf("Pas de solution");     
                          }
            else          {
                    x1=-b/2*a;
                    printf("\nX= %f",x1);
                          }
           
           }
else if(b!=0){
         x1=-c/b;
         printf("\nX= %f",x1);
         
         }
else if(c==0){
         printf("Tout R");
         }
else{
         printf("Impossible");
         }    

getch(); 
       
       }
