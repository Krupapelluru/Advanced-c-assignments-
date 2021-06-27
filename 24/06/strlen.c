/*program to find the string lenght without using string library*/




#include<stdio.h>
int strleng(char *ch);

int main()
{


char ch[100];
int count;
printf("enter the string to find the lenght\n");
 scanf("%[^\n]s", ch);

count=strleng(ch);
printf("the lenght of the netered string is %d\n",count);

}

int strleng(char *ch)
{

	int count=0;

	while(*ch !='\0')
	{
		
        count++;
        ch++;

	}

	return count;
}




#if 0


rupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the string to find the lenght
krupa
the lenght of the netered string is 5
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the string to find the lenght
latha
the lenght of the netered string is 5
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the string to find the lenght
krupalatha
the lenght of the netered string is 10
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the string to find the lenght
krupa@latha
the lenght of the netered string is 11
krupa@krupa-VirtualBox:~/krupa$ 

#endif