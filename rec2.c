#include<stdio.h>

void printnumber(int num)
{
	if(num)
	 printnumber(num-1);
	else
		return;
	printf("%d\t",num);
}

int main()
{
	int num;
	printf("enter the number \n");
	scanf("%d",&num);
	printnumber(num);
	return 0;
}


