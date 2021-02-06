#include <stdio.h>
#include "header.h"

  int calcul(void){

 static  int nombre=0;
 nombre+=5;
 return nombre;
}
