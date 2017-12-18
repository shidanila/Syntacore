#include <stdio.h>

void palindrome(int);

int main(void)
{
   int number=0;
   int choice=1;
	   printf("Dear, do you want to determine if the number is a palindrome?\n 1-YES\n 2-NO\n");
	   scanf("%d",&choice);
	   if (choice==1)
		   {
			   printf("Your number, Mister\n");
			   scanf("%d",&number);
			   palindrome(number);
			}
			printf("Press any key to exit\n");
			scanf("%d");
	return 0;
}
