

/*program to find  even and odd */

#define EVEN_ODD(number)  (number&1)?1:0

#include<stdio.h>

int main()
{

int number;

printf("enter a number to check the number is even or odd\n");
scanf("%d",&number);

int result =EVEN_ODD(number);

if(result==1)
{
         printf("the entered number is %d odd ",result);
}
else
{

	     printf("the entered number is %d even",result);
}

return 0;

}




#if 0



rupa@krupa-VirtualBox:~/krupa$ gcc evenoddbit.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter a number to check the number is even or odd
8
the entered number is 0 evenkrupa@krupa-VirtualBox:~/krupa$ ./a.out
enter a number to check the number is even or odd
9
the entered number is 1 odd krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter a number to check the number is even or odd
10
the entered number is 0 evenkrupa@krupa-VirtualBox:~/krupa$ ./a.out
enter a number to check the number is even or odd
11
the entered number is 1 odd krupa@krupa-VirtualBox:~/krupa$ 


#endif