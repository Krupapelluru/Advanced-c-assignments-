/*program to ceck te array elemets are in asending or not*/


#include<stdio.h>
#define MAXSIZE 100

int main()
{


int arr[MAXSIZE],size,i;
printf("enter te size of array\n");
scanf("%d",&size);

printf("enter the array elements\n");

for(i=0;i<size;i++)
{
	scanf("%d",&arr[i]);
}


for(i=0;i<size-1;i++)
{

	if(arr[i]>arr[i+1])
	{
		printf("te elemets are not sorted  in asending order\n");
		return 0;
		
	}
}

printf("the elemnts are in asending order\n");
printf("the enetered elements are\n");

for(i=0;i<size-1;i++)
{
	printf("%d\t",arr[i]);
}

return 0;

}



#if 0 



enter te size of array
5
enter the array elements
1
2
3
4
5
the elemnts are in asending order
the enetered elements are
1	2	3	4	krupa@krupa-VirtualBox:~/krupa$


krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter te size of array
7
enter the array elements
4
3
6
7
8
2
7
te elemets are not sorted  in asending order







#endif