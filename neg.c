#include <stdio.h>
 
int main(void) 
{
	int a;
	printf("enter the value of a: \n");
	scanf("%d",&a);
	if(a>0)
	{
		printf("positive");
	}
	else if(0>a)
	{
		printf("negative");
		}
	else
	{
		printf("zero");
	}
 
	return 0;
}
 
