#include <stdio.h>

void Check_num_type(float x);
int main(void)
{
	float x;
	while(1)
	{
		printf("please enter a number");
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &x);
		Check_num_type(x);
	}
}

void Check_num_type(float x)
{
	if(x > 0)
	{
		printf("%f is positive\r\n",x);
	}else if(x < 0)
	{
		printf("%f is negative\r\n",x);
	}else if (x == 0)
	{
		printf("You entered zero\r\n");
	}else
	{
		printf("entered value is not number");
	}
}


