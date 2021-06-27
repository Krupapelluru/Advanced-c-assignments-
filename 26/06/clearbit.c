
/* program to clear  bit*/


#include<stdio.h>

#define CLEAR_BIT(number,pos)  (number&=~(1<<pos))

int main()
{



	int num,p;
    printf("enter the number and position to set a bit\n");
	scanf("%d %d",&num,&p);
	CLEAR_BIT(num,p);
	printf("after clearing  the bit the number is %d\n",num);
	return 0;

}



#if 0

krupa@krupa-VirtualBox:~/krupa$ gcc clearbit.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the number and position to set a bit
7
0
after clearing  the bit the number is 6
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the number and position to set a bit
8
3
after clearing  the bit the number is 0
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the number and position to set a bit
10
3
after clearing  the bit the number is 2
#endif