
/* program to find bit position  bit*/


#include<stdio.h>

#define BIT_POS(number,pos)  (number &(1<<pos)) ?1:0

int main()
{



	int num,p;
    printf("enter the number and position to set a bit\n");
	scanf("%d %d",&num,&p);
	int result=BIT_POS(num,p);
	printf("after clearing  the bit the number is %d\n",result);
	return 0;

}



#if 0

krupa@krupa-VirtualBox:~/krupa$ gcc bitposition.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the number and position to set a bit
8
3
after clearing  the bit the number is 1
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the number and position to set a bit
7
3
after clearing  the bit the number is 0
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the number and position to set a bit
10
0
after clearing  the bit the number is 0
krupa@krupa-VirtualBox:~/krupa$ 



#endif