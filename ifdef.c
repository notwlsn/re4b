/* Example using #ifdef directive */

#include <stdio.h>

// Whether or not this is defined dictates the #ifdef inclusion.
// Useful in debug vs release software
#define YEARS_OLD 10

int main()
{
   #ifdef YEARS_OLD
   printf("TechOnTheNet is over %d years old.\n", YEARS_OLD);
   #endif

   printf("TechOnTheNet is a great resource.\n");

   return 0;
}
