
/*progam to check the endians */


#include <stdio.h>


int main()
{

	union{

		int x;
		short sh;
		char c[2];
		char ch[4];
	}var;


	var.x=0x12345678;
	// printf("0x%x  0x%x  0x%x\n",var.sh,var.c[0],var.c[1]);

	// printf("0x%x 0x%x 0x%x 0x%x",var.ch[0],var.ch[1],var.ch[2],var.ch[3]);


	if(var.c[0]==1)
		printf("littleendian\n");
	else
		printf("bigenedian\n");
}


#if 0

krupa@krupa-VirtualBox:~/krupa$ ./a.out
bigenedian
krupa@krupa-VirtualBox:~/krupa$




#endif
