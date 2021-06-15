#include<stdio.h>
int main()
{
	int x=10,y=20;

	{
		int x=100,z=1;
		printf("%d %d",x,z);
	}
	printf("%d %d",x,z);
	return 0;
}
