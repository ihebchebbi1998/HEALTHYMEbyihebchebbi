#include <stdio.h>
#include <stdlib.h>
#include "source.h"
int main()
{
    int choix ;
    char name[20] ;
    int bmrcalorie ;
    int g ,  wm,   hm,   am ,  bmrmen ,  ww ,  hw ,   aw  ,   bmrw ;



do  {

    system("cls") ;
    printf("     ___     __   __     _____    ______             \n") ;
    printf("    |   |   |  | |  |   |   __|   |  _  \            \n");
    printf("    |   |   |  |_|  |   |  |__    | |_| /            \n");
    printf("    |   |   |   _   |   |   __|   |    /             \n");
    printf("    |   |   |  | |  |   |  |__    |  _  \             \n");
    printf("    |   |   |  | |  |   |  |__    | |_| |             \n");
    printf("    |___|   |__| |__|   |_____|   |____/             \n");
     printf("____________________________________________________\n");
    printf("          WELCOME TO HEALTHY ME BY IHEB CHEBBI       \n");
    printf("____________________________________________________\n") ;
    printf("---------------1---Enter your name-----------------\n") ;
    printf("---------------2---Calculate your calories --------\n") ;
    printf("---------------3---CreateTrainingPlan -------------\n") ;
    printf("---------------4---Get more info ------------------\n") ;
    printf("---------------6---EXIT ---------------------------\n") ;
    scanf("%d",&choix) ;


    switch(choix) {

    case 1 :

      get_name(name) ;

   system("pause") ;


    break ;
    case 2 :

     printf("hey, %s \n",name) ;
     calories(g , wm, hm,  am ,bmrmen ,   ww ,  hw ,   aw  ,   bmrw) ;

     system("pause") ;


    break  ;
    case 3 :
    trainingplanfonction();

     system("pause") ;


    break  ;
    case 4 :

    system("pause") ;
    break  ;
    case 5 :

    system("pause") ;


    break  ;
    case 6 :
    exit(EXIT_FAILURE) ;
   system("pause") ;
    break ;
                       default : printf("Please choose between 1 and 6\n") ;
                      system("pause") ;
    break ;
     }
} while(choix != 6 ) ;


    return 0;
}

