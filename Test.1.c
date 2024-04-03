#include<stdio.h>

int main ()
{
	int x, y;
	char n;
	
	printf("press 1 for sum\n");
	printf("press 2 for sub\n");
	printf("press 3 for multiply\n");
	printf("press 4 for division\n");
	
	printf ("Enter +, -, *, /:");
	scanf("%d, &n");
	
	printf("Enter first value: ");
	scanf("%d, &x");
	
	printf("Enter first value:");
	scanf("%d, &y");
	
	switch(n)
	
	{
		
		case 1:
		printf("sum is:%d",x+y);
		break;
		
		case 2:
		printf("sub is:%d",x-y);
		break;
		
		case 3:
		printf("multiply is:%d",x*y);
		break;
		
		case 4:
		printf("division is:%d",x/y);
		break;
	}
}
