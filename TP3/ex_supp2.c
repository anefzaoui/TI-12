#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{

      int qcom;
      float totale,pu,tot,transport,remise,totrem;
      printf("donner la quantité de commande :");
      scanf("%d",&qcom);
      printf("donner le prix unitaire :");
      scanf("%f",&pu);
      
      tot=pu*qcom;
      
      if((tot>=200) && (tot<=500)) {
           remise=(tot/100)*5;
           totrem=tot-remise;         
                                   }
      else if(tot>500) {
           remise=(tot/100)*10;
           totrem=tot-remise;         
                        }
      else{
          totrem=tot;
          } 
          
          
      if(totrem<1000){
               transport=(totrem/100)*2;
               totale=totrem+transport;     
                      }
      else{
               totale=totrem;
           }
      
      printf("Prix finale est %f",totale);
      getch(); 
       
}

      
