#include <stdio.h>
#include <conio.h>
main()
{
      int a,b,c ;
      printf("donner a\n");
      scanf("%d",&a);
      printf("donner b\n");
      scanf("%d",&b);   
     printf("donner c\n");
      scanf("%d",&c);      
     
     if((a>b)&&(a>c))
     
                     printf("%d est le plus grand ",a);
                     if ((b>a)&&(b>c))
                     printf("%d est le plus grand ",b);
                     if ((c>a)&&(c>b))
                      printf("%d est le plus grand ",c);
                     
                     
       
  getch(); 
       
       }

