#include<stdio.h>

int main()
{
	int p;
	char grade;
	printf("Enter your percentage:");
	scanf("%d", &p);

	if(p < 100 && p > 90)
	{
		printf("You got A");
	}else if(p < 90 && p > 80)
	{
		printf("You got B");
	}else if(p < 80 && p > 70)
	{
		printf("You got C");
	}else{
		printf("Try again, you got F\n");
	}
	
}