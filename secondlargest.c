/*progarm to find the second largest element in te array*/


#include<stdio.h>
#define MAXSIZE 100


int main()
{
	int arr[MAXSIZE],size,i,largest,secondlargest;
	printf("enter te size of te array\n");
	scanf("%d",&size);
	printf("enter te array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

largest=arr[0];
secondlargest=arr[0];

for(int i=0;i<size;i++)
{
	if(arr[i]>largest)
	{
		secondlargest=largest;
		largest=arr[i];
	}
	else if(arr[i]>secondlargest)
	{
		secondlargest=arr[i];
	}
}
printf("the secondlargest is %d\n",secondlargest);

return 0;
}

#if 0
enter te size of te array
5
enter te array elements
1
23
45
67
89
the secondlargest is 67


enter te size of te array
10
enter te array elements
1
2
34
56
75
87
23
45
76
89
the secondlargest is 87

enter te size of te array
3
enter te array elements
1
-1
-2
the secondlargest is 1


#endif
