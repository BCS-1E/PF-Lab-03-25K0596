#include<stdio.h>
int main()
{
	char name[15];
	int age;
	printf("Enter your name and age: ");
	scanf("%s%d",name,&age);
	printf("Your name is %s and your age is %d ",name,age);
	return 0;

}
