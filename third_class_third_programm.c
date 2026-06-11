#include <stdio.h>

int main(void)
{
   int year = 2026;
   int month = 6;
   int date = 11;
   printf("%i/0%i/%i\n",year,month,date);
   printf("%i/0%i/%i\n",date,month, year);
   
}
    