
/*program to get the bits */




#include<stdio.h>
int main()
{


	int number,pos,result;

	printf("enter the number\n");
	scanf("%d",&number);
	printf("enter the position\n");
	scanf("%d",&pos);

	result= (number>>pos)&1;

	printf("the %dth position bit status is %d \n",pos,result);
	return 0;
}


#if 0


krupa@krupa-VirtualBox:~/krupa$ gcc  getbit.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the number
5
enter the position
0
the 0th position bit status is 1 
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the number
6
enter the position
0
the 0th position bit status is 0 
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the number
7
enter the position
2
the 2th position bit status is 1 
krupa@krupa-VirtualBox:~/krupa$ 

#endif