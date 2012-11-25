#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    float s,a,b,c,p;
    printf("donner a\n");
    scanf("%f",&a);
    printf("donner b\n");
    scanf("%f",&b);
    printf("donner c\n");
    scanf("%f",&c);
    printf("donner p\n");
    scanf("%f",&p);
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("L'aire de ce triangle est %f", s);
    getch();
} 
     
