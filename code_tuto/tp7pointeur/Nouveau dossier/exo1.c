#include <stdio.h>



 main(){

/* float a = 0.001;
 float b = 0.003;
 float c , *pa, *pb;
 pa = &a;
 *pa *=2;
 pb = &b;
  c= 3*(*pb- *pa);
  printf("a :%f\n b : %f\n c :%f",a, b, c);
 printf("pa :%p \ a:%p",&pa,&a);*****************/
 int a=1;
 int b=2;
 int c=3;
 int *pa=NULL, *pb=NULL;
   printf("pa :%d \n pb:%i\n",pa,pb);

 pa= &a;
 pb =&c;
*pa=5;
  printf("pa :%d \n pb: %i \n%i\n",*pa,*pb,a);

 }
