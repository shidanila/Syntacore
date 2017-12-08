#include <stdio.h>

void palindrome(int number)
{
   int inverse = 0;
   int temp;
   temp = number;

   while( temp != 0)
   {
      inverse = inverse * 10;
      inverse = inverse + temp%10;
      temp = temp/10;
   }

   if ( number == inverse )
      printf("%d is a palindrome number.\n", number);
   else
      printf("%d is not a palindrome number.\n It's a fiasco, bro\n", number);
  
}