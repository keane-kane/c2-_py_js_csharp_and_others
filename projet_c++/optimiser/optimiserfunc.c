#include "optimiserfunc.h"

textOptimal(T_Text *text)
{
    printf("hello %s", *text);
}
struct Tableau_Text
{
    char  tableau_lettre;
} T_Text;

switch ( queue )



   case 0 : letter = 'W';

        break;

   case 1 : letter = 'S';

       break;

   case 2 : letter = 'U';

      break;

}

ou

if ( queue == 0 )

     letter = 'W';

else if ( queue == 1 )

      letter = 'S';

else

     letter = 'U';

Devient :

static char *classes="WSU";

letter = classes[queue];

//==========
void func1( int *data )

{

     int i;

   for(i=0; i<10; i++)

        {

        somefunc2( *data, i);

        }

}
void func1( int *data )

{

   int i;

   int localdata;

   localdata = *data;

    for(i=0; i<10; i++)

        {

             somefunc2( localdata, i);

         }

}
for(i=0; i<100; i++)

{

stuff();

}

for(i=0; i<100; i++)

{

morestuff();

}

devient :

for(i=0; i<100; i++)

{

stuff();

morestuff();

}

while (i<10000)

{

   if( estbonne (valeur[i]) )

   {

     trouve = TRUE;

   }

    i++

}

devient :

while (i<10000)

{

  if ( estbonne (valeur[i]) )

      break;

 i++

}
