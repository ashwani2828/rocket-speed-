#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   int gs;
   int s;
   int gnt;
   gnt = 1;
   srand(time(0));
   s = rand() % 100 + 1;
   do
   {
      printf("please enter the speed in km per second so that rocket can be launched\n");
      scanf("%d", &gs);
      if (gs > s)
      {
         printf("please lower down  the speed \n");
      }
      else if (gs < s)
      {
         printf(" please higher up the speed \n");
      }
      else if (gs == s)
      {
         printf("congrats for guessing  the correct speed now the rocket can be launched 1 2 3 and LIFT OFF\n");
         printf("\n");
         printf("the number of times you have guessed the rocket speed  %d\n", gnt);
         printf("\n");
      }
      gnt++;
   } while (gs != s);
   if (gnt <= 5)
   {
      printf("wow you are a true a  NASA scientist \n");
      printf("\n");
   }
   else if ((gnt > 5) && (gnt <= 10))
   {
      printf("well you are not a perfect scientist leave the space field \n");
      printf("\n");
   }

   else if ((gnt >= 10) && (gnt <= 20))
   {
      printf("please you should first clear the jee exam \n");
      printf("\n");
   }
   return 0;
}

