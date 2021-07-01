

/*program to count  set bit in a number */


#include<stdio.h>


int main()
{


int num,count=0;

printf("enter the number to find the number of setbits\n");
scanf("%d",&num);

while(num)
{

 
    count +=num&1;
	num>>=1;
  //   num&=(num-1); 
 	// count++;

}

printf("the number of setbit count is %d\n",count);
return 0;

}



#if 0

logic 2


while(num)
{
	
	count +=num&1;
	num>>=1;
}



krupa@krupa-VirtualBox:~/krupa$ gcc  countbits.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the number to find the number of setbits
7
the number of setbit count is 3
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the number to find the number of setbits
6
the number of setbit count is 2
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the number to find the number of setbits
10
the number of setbit count is 2
krupa@krupa-VirtualBox:~/krupa$ 





#endif 