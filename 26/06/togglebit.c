
/* program to toggle  bit*/


#include<stdio.h>

#define TOGGLE_BIT(number,pos)  (number^=(1<<pos))

int main()
{



	int num,p;
    printf("enter the number and position to set a bit\n");
	scanf("%d %d",&num,&p);
	TOGGLE_BIT(num,p);
	printf("after clearing  the bit the number is %d\n",num);
	return 0;

}



#if 0

krupa@krupa-VirtualBox:~/krupa$ gcc togglebit.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the number and position to set a bit
7
3
after clearing  the bit the number is 15
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the number and position to set a bit
8
2
after clearing  the bit the number is 12
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the number and position to set a bit
10
1
after clearing  the bit the number is 8
krupa@krupa-VirtualBox:~/krupa$ 


#endif