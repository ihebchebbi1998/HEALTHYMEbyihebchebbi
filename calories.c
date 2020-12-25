#include <stdio.h>
#include <stdlib.h>
#include "source.h"


int calories(int g , int   wm, int  hm, int  am ,  int bmrmen , int  ww , int hw ,  int aw  ,  int bmrw) {



printf("hey ! Want to calculate your calories ? \n") ;
printf("Please enter your gender  (1)Men (2)Women  : ") ;
scanf("%d",&g) ;
if (g==1) {
    printf("Nice so you are a men .. lets calculate your calories \n") ;
    printf("Please enter you  weight  in KG = ") ;
    scanf("%d",&wm) ;
    printf("Please enter your Height = ") ;
    scanf("%d",&hm) ;
    printf("Please enter your age = ") ;
    scanf("%d",&am) ;

    bmrmen = 10*wm + 6.25*hm - 5*am + 5 ;
    printf("your daily calorie is = %d \n",bmrmen) ;
}
  else if (g==2) {
    printf("hey miss lets calculte your calories now !\n") ;
    printf("Please enter you  weight  in KG = ") ;
    scanf("%d",&ww) ;
    printf("Please enter your Height = ") ;
    scanf("%d",&hw) ;
    printf("Please enter your age = ") ;
    scanf("%d",&aw) ;
    bmrw = 10*ww + 6.25*hw - 5*aw - 161 ;
    printf("your daily calorie is = %d",bmrw) ;

}  else {

printf("please choose beetween (1) or (2)") ;
}

return 0 ;
}


