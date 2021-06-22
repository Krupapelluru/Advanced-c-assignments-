# include <stdio.h>

int main()
{


	int arr[3][4]={
		               {10,11,12,13},
		               {20,21,22,23},
		               {30,31,32,33},
		           };


		           int i,j;
		           for(i=0;i<3;i++)
		           {
		           	printf("address of %d th array =%p %p \n",i,arr[i],*(arr+i));
		           	for(j=0;j<3;j++)
		           	{
		           		printf("%d ",arr[i][j]);
		           		printf("%d ", *(*arr+i)+j);
                        printf("%d ",(*(*arr+i)+j));
		           	}
		           	printf("\n");
		           }
	
}

#if 0

krupa@krupa-VirtualBox:~/krupa$ gcc  arraypointer.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
address of 0 th array =0x7fff7aae9a50 0x7fff7aae9a50 
10 10 10 11 11 11 12 12 12 
address of 1 th array =0x7fff7aae9a60 0x7fff7aae9a60 
20 11 11 21 12 12 22 13 13 
address of 2 th array =0x7fff7aae9a70 0x7fff7aae9a70 
30 12 12 31 13 13 32 14 14 
krupa@krupa-VirtualBox:~/krupa$ 

#endif