
/* program to set bit*/


#include<stdio.h>

#define SET_BIT(number,pos)  (number|=(1<<pos))

int main()
{



	int num,p;
    printf("enter the number and position to set a bit\n");
	scanf("%d %d",&num,&p);
	SET_BIT(num,p);
	printf("after stetting the bit the number is %d\n",num);
	return 0;

}



#if 0

krupa@krupa-VirtualBox:~/krupa$ gcc serbit.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the number and position to set a bit
5
2
after stetting the bit the number is 5
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the number and position to set a bit
8
2
after stetting the bit the number is 12
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the number and position to set a bit
2
0
after stetting the bit the number is 3
krupa@krupa-VirtualBox:~/krupa$ 

#endif