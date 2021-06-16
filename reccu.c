#include<stdio.h>

void dectobin(int num)
{
	if(num==0)
	{
		printf("0");
		return;
	}
     dectobin(num/2);
	printf("%d",num%2);
	
	
}

int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	dectobin(num);
	return 0;
}
