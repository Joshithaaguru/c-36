#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char name[30];
	printf("enter the first name:\n");
	scanf("%s",name);
	printf("reversed string is %s\n",strrev(name));
	return 0;
}
