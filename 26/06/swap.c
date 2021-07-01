// swap program without using bitwize operators 


#include <stdio.h>

int main()
{
    int  a,b;

    printf("enter any two numbers to perform swap operation\n");
    scanf("%d %d",&a,&b);
    printf("Before swap the entered numbers are : a=%d  b=%d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap the numbers are :a=%d  b=%d \n",a,b);

    return 0;
}

#if 0



rupa@krupa-VirtualBox:~/krupa$ gcc swap.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter any two numbers to perform swap operation
12
13
Before swap the entered numbers are : a=12  b=13 
After swap the numbers are :a=13  b=12 
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter any two numbers to perform swap operation
14
56
Before swap the entered numbers are : a=14  b=56 
After swap the numbers are :a=56  b=14 
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter any two numbers to perform swap operation
89
09
Before swap the entered numbers are : a=89  b=9 
After swap the numbers are :a=9  b=89 


#endif