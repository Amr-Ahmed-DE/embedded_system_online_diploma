#include <stdio.h>

void Factorial(int x);
int main(void)
{
	int x;
	while(1)
	{
		printf("please enter an integer:");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &x);
		Factorial(x);
	}
}

void Factorial(int x)
{
	int i = 1, sum = 1;
	if(x == 0)
	{
		printf("Factorial = 1 \r\n");
	}else if (x < 0)
	{
		printf("Error!! Factorial of negative number doesn't exist \r\n");
	}else if(x > 0)
	{
		while(i <= x)
		{
			sum*= i;
			i++;
		}
		printf("Factorial = %i \r\n", sum);
	}

}
