#include<stdio.h>

int main()
{

	int age;
	printf("Enter your age:");
	scanf("%d", &age);
	if(age>=18)
	{
		printf("You are eligible to vote.\n");
	}else{
		printf("You are not eligible to vote. Come back when you are 18.\n");
	}

	int n1, n2;
	printf("Enter 2 numbers:");
	scanf("%d %d",&n1, &n2);
	if(n1 == n2)
	{
		printf("Numbers are equal.");
	}else{
		printf("Numbers are not equal.");
	}
	return 0;
}