#include<stdio.h>
int main()
{
	int sum=0,num,last;
	printf("enter the number to find the sum\n");
	scanf("%d",&num);

	while(num>0 )
	{
		last=num%10;
		sum+=last;
		num=num/10;
	}

	printf("the sum of the all digits is %d\n",sum);

	if(num==0)
	{
          num=sum;
	  sum=0;

	  while(num>0)
	  {
		  last=num%10;
		  sum+=last;
		  num=num/10;
	  }
	}
	printf("the sum of the digits %d\n",sum);
	 return 0;
}
