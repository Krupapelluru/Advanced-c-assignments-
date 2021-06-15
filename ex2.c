#include<stdio.h>
int main()
{
	int a=2,b=1;
	int x,y;
	x=a++ && (!b) || ++a;
	y= (a++ &&(!b) &&b)||++a;
        printf("x=%d\n",x);
	printf("y=%d\n",y);
	return 0;
}
