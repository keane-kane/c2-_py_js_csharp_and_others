
#include<stdio.h>
#include<conio.h>
int main()
{
 int age;
 char gender ,m,f;
 printf("Enter your age and gender(m/f):\n ");
 scanf("%d\n%c",&age,&gender);

 if (age >= 50)
 {
 if (gender == m)
 printf("Sir! You can cast vote. ");
 else
 printf("Madam! You can cast vote. ");
 }
 else
 {
 if (gender == f)
 printf("Sir! You can't cast vote. ");
 else
 printf("Madam! You can't cast vote. ");
 }

 getch();
 return 0;
}
