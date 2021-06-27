/* program to copy one string to another string */


#include<stdio.h>


int main()
{

	char ch1[100],ch2[100];
	int i;

	printf("enter the string to cpoy\n");

	scanf("%[^\n]s", ch1);
	printf("the enterd string one is %s\n",ch1);

	for(i=0;ch1[i] !='\0';i++)
	{
		ch2[i]=ch1[i];
	}
     
     ch2[i]='\0';
  

printf(" after string copy operation  string one =%s\n   and string two is= %s \n ",ch1,ch2);


return 0;

}


#if 100
krupa@krupa-VirtualBox:~/krupa$ gcc  strcopy.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the string to cpoy
krupalatha
the enterd string one is krupalatha
 after string copy operation  string one =krupalatha
   and string two is= krupalatha 
 krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the string to cpoy
yachendra
the enterd string one is yachendra
 after string copy operation  string one =yachendra
   and string two is= yachendra 
 krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the string to cpoy
123latha
the enterd string one is 123latha
 after string copy operation  string one =123latha
   and string two is= 123latha 
 krupa@krupa-VirtualBox:~/krupa$ 

#endif