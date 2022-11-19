#include<stdio.h>

int main()
{
	int a=123, b=44;
	if(a == 123 || b == 94)
	{
		printf("Equal\n");
	}else{
		printf("Not equal\n");
	}

	int uname=123;
	int pass=345;

	int username, password;
	printf("Enter your username and password:");
	scanf("%d %d",&username, &password);
	if(uname == username && pass == password)
	{
		printf("Welcome to Facebook!\n");
	}else{
		printf("Try again, your username or password is incorrect\n");
	}

}