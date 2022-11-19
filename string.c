#include<stdio.h>

int main()
{
	char grade;
	printf("Enter your Grade:");
	scanf("%c",&grade);
	printf("The grade is :%c\n",grade);

	char name[12], lastname[20];
	printf("Enter your name:");
	scanf("%s", name);
	printf("Enter your lastname:");
	scanf("%s", lastname);
	printf("Your name is: %s \tlastname is: %s\n", name, lastname);

}