#include<stdio.h>
int printnumber(int num);
int main()
{
  int num;
  printf("enter the number\n");
  scanf("%d",&num);
  printnumber(num);
 return 0; 
}

int  printnumber(int num)
{
	if(num<=0)
	{
		return 0;
	}
	else
	{
		printf("%d\t",num);
		printnumber(num-1);
	}
}

