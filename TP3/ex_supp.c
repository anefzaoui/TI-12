#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{

      int a,b,c;
      printf("donner a :");
      scanf("%d",&a);
      printf("donner b :");
      scanf("%d",&b);
      printf("donner c :");
      scanf("%d",&c);
      
      if((a>b)&&(a>c)){
              if (b>c){printf("%d > %d > %d",a,b,c);}
              else if (c>b){printf("%d > %d > %d",a,c,b);}
                    }
                    
      else if((b>a)&&(b>c)){
              if (a>c){printf("%d > %d > %d",b,a,c);}
              else if (c>a){printf("%d > %d > %d",b,c,a);}
                    }
                    
      else if((c>a)&&(c>b)){
              if (a>b){printf("%d > %d > %d",c,a,b);}
              else if (b>a){printf("%d > %d > %d",c,b,a);}
                    }
   
      
      getch(); 
       
}

      
