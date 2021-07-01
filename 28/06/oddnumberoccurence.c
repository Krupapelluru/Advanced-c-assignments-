
/*program to find the odd occurance of a number in a given array*/



#include<stdio.h>
#define MAX_SIZE 100

int Odd_Occ_Number(int arr[],int size);
int main()
{


	int arr[MAX_SIZE],n;

	printf("enter the size of an  array in odd number \n");
	scanf("%d",&n);


	printf("enter the elements of an array\n");

	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);

	}

	int number=Odd_Occ_Number(arr,n);
	printf("the oddoccurance number is %d",number);
}

int Odd_Occ_Number(int arr[],int size)
{


int result=0;

for(int i=0;i<size;i++)
{
	result ^=arr[i];

}

return result;
}




#if 0



krupa@krupa-VirtualBox:~/krupa$ gcc  oddnumberoccurence.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the size of an  array in odd number 
5
enter the elements of an array
11
11
12
12
13
the oddoccurance number is 13krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the size of an  array in odd number 
11
enter the elements of an array
1
2
3
4
5
6
1
2
3
4
5
the oddoccurance number is 6krupa@krupa-VirtualBox:~/krupa$ 

#endif