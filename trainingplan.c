#include <stdio.h>
#include <stdlib.h>
#include "source.h"

void trainingplanfonction( int i , int j ) {





  printf("Enter how many days you want to train = ") ;
  scanf("%d",&j) ;

   struct trainingplan {
      int minutes ;
      int thetime ;
      char trainingday[20] ;
      char bodypart[20] ;
    } ;

struct trainingplan dayscount[j] ;

for (i=0 ; i < j; i++) {

printf("Enter how many minutes the workout take :\n") ;
scanf("%d",&dayscount[i].minutes) ;


printf("Enter the time :\n") ;
scanf("%d",&dayscount[i].thetime) ;

printf("Enter the day :\n") ;
fflush(stdin) ;
gets(dayscount[i].trainingday)  ;


printf("Enter the bodypart :\n") ;
fflush(stdin) ;
gets(dayscount[i].bodypart) ;



}

printf("__________________________________YOUR TRAINING PLAN_____________________________________\n") ;
printf("_________________________________________________________________________________________\n") ;



for (i=0 ; i < j; i++) {
        printf(" %d |Duration : %4d  |Time : %4d |Day : %s |Bodypart : %s \n",i,dayscount[i].minutes,dayscount[i].thetime,dayscount[i].trainingday,dayscount[i].bodypart) ;



}

}
