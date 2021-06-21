/* inline function demonstartion */


#include<stdio.h>


  static inline int add(int a,int b)
{
	return a+b;
}

int main()
{


	int a,b,c;

	printf("enter the numbers to add\n");

	scanf("%d %d",&a,&b);

	c= add(a,b);

	printf("the sum of two numbers is %d",c);

	return 0;
}


#if 0 

krupa@krupa-VirtualBox:~/krupa$ gcc  sampleinline.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the numbers to add
90  
08
the sum of two numbers is 98krupa@krupa-VirtualBox:~/krupa$ 


krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the numbers to add
67
85
the sum of two numbers is 152krupa@krupa-VirtualBox:~/krupa$ 
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the numbers to add
-12
45
the sum of two numbers is 33krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the numbers to add
-14
-67
the sum of two numbers is -81krupa@krupa-VirtualBox:~/krupa$ 



#endif