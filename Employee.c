#include<stdio.h>
int main()
{

	int id, contact;
	float salary;
	char name[15], lastname[15];
	printf("Please enter your ID and Contact number:");
	scanf("%d %d",&id, &contact);
	printf("Enter your name:");
	scanf("%s", name);
	printf("Enter your lastname:");
	scanf("%s", lastname);
	printf("Enter your salary:");
	scanf("%f", &salary);

	printf("The details are: \n");
	printf("ID:%d\tName:%s\tLastname:%s\tSalary:%f\tContact:%d",id,name,lastname,salary,contact);
}