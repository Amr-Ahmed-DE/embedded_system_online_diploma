//program to check whether a number is Odd or Even
//Eng: Amr Ahmed

#include <stdio.h>

void check_nu_type(int x);

int main(void)
{
	int y;
	printf("Enter an integer you want to check: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &y);
	check_nu_type(y);
}

void check_nu_type(int x)
{
	if(x%2 == 0)
	{
		printf("%d is even", x);
	}
	else if (x%2 != 0)
	{
		printf("%d is odd", x);
	}
	else
	{
		printf("please try again with right valuen");
	}
}

