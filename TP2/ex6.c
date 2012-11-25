#include <stdio.h>
#include <conio.h>
main()
{
      double dist;
      float A,B,xa,xb,ya,yb;
      printf("Donner les valeurs Xa, Xb, Ya et Yb \n");
      scanf("%f %f %f %f",&xa,&xb,&ya,&yb);
      A=xa-xb;
      B=ya-yb;
      dist=sqrt(pow(A,2)+pow(B,2));
      printf("La distance est %lf",dist);
      getch();
}
 
