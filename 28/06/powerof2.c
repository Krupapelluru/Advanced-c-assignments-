
/* this program to find the number is power of two or not*/


#include <stdio.h>

int main()
{


	int number,result;
	printf("enter any number\n");
	scanf("%d",&number);

	result= number&& (!(number &(number-1)));

	printf("%d",result);

	if(result==1)
	{
		printf("the number is %d even\n",number);
	}
	else
	{
		printf("the number is %d odd\n",number);
	}

	return 0;

}


#if 0




krupa@krupa-VirtualBox:~/krupa$ gcc powerof2.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter any number
2
1the number is 2 even
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter any number
3
0the number is 3 odd
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter any number
5
0the number is 5 odd
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter any number
6
0the number is 6 odd


#endif 