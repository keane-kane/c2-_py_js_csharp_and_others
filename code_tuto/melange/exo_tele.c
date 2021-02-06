#include <stdio.h>

 int main(){


 float a= 0.001;
 float b=0.003;
 float c, *pb, *pa;
 pa= &a;
 *pa *=2;
 pb= &b;
 c =3*(*pb - *pa);

 printf("la valeur de  a est %f\n celui de b est de %f\n et celle de c est %f",a ,b ,c);
 }
