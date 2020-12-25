#include <stdio.h>
#include <stdlib.h>
#include "source.h"


char get_name(char name[20]) {

printf("Enter your name please :  ") ;
fflush(stdin) ;
gets(name) ;
printf("welcome to HealthyMe dear %s \n",name) ;

return name ;
}
