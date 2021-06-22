/* Multiplication of 2D- array */


# include <stdio.h>
int main()
{

	int Rows,Colu,Array_A[10][10],Array_B[10][10],Array_R[10][10];

	printf("enter the Number of Rows\n");
	scanf("%d",&Rows);
	printf("enter the Number of Columons\n");
	scanf("%d",&Colu);
    printf("enter the  first array elemets\n");

	for(int i=0;i< Rows;i++)
	{
		for(int j=0;j<Colu;j++)
		{
			scanf("%d",&Array_A[i][j]);
		}
	}

	printf("enter the  Second  array elemets\n");

	for(int i=0;i< Rows;i++)
	{
		for(int j=0;j<Colu;j++)
		{
			scanf("%d",&Array_B[i][j]);
		}
	}

	/*Multiplying the array*/

    for(int i=0;i< Rows;i++)
	{
		for(int j=0;j<Colu;j++)
		{
			Array_R[i][j]=0;
			for(int k=0;k<Colu;k++)
			{
				Array_R[i][j]+= Array_A[i][k] * Array_B[k][j];
			}
		}
	}


   printf("the result of Multiplication of array is\n");

	for(int i=0;i< Rows;i++)
	{
		for(int j=0;j<Colu;j++)
		{
			printf("%d\t",Array_R[i][j]);
		}
		printf("\n");
	}

}


#if 0



krupa@krupa-VirtualBox:~/krupa$ gcc arrayMul.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the Number of Rows
2   
enter the Number of Columons
2
enter the  first array elemets
1
2
3
4
enter the  Second  array elemets
5
6
7
8
the result of Multiplication of array is
19	22	
43	50	
krupa@krupa-VirtualBox:~/krupa$ ^C
krupa@krupa-VirtualBox:~/krupa$ 




krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the Number of Rows
4
enter the Number of Columons
4
enter the  first array elemets
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
enter the  Second  array elemets
12
13
4
5
6
7
8
96
54
2
3
4
5
5
1
2
the result of Multiplication of array is
206	53	33	217	
514	161	97	645	
822	269	161	1073	
1130	377	225	1501



#endif