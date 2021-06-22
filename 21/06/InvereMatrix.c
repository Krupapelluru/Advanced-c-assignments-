/*program to find inverse matrix*/

#include<stdio.h>
#define MAX_SIZE 100
 
int main()
{

int mat[MAX_SIZE][MAX_SIZE], i, j,r,c;
printf("enter the size of rows and coloumns\n");
scanf("%d %d",&r,&c);

float determinant = 0;

printf("Enter elements of matrix row wise:\n");

for(i = 0; i < r; i++)
{
for(j = 0; j < c; j++)
{
           scanf("%d", &mat[i][j]);
 }

 }

printf("\nGiven matrix is:");

for(i = 0; i < r; i++)
{
printf("\n");
for(j = 0; j < c; j++)
{
printf("%d\t", mat[i][j]);
}
}


//finding determinant
for(i = 0; i < r; i++)
{
determinant = determinant + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));

}
printf("\n\ndeterminant: %f\n", determinant);
printf("\nInverse of matrix is: \n");

for(i = 0; i < r; i++){

for(j = 0; j < c; j++)
{
printf("%.2f\t",((mat[(j+1)%3][(i+1)%3] * mat[(j+2)%3][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3] * mat[(j+2)%3][(i+1)%3]))/ determinant);

}
printf("\n");

 }
   return 0;
}

#if 0
krupa@krupa-VirtualBox:~/krupa$ gcc InvereMatrix.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the size of rows and coloumns
2
3
Enter elements of matrix row wise:
1
2
3
4
5
6

Given matrix is:
1  2  3  
4  5  6  

determinant: 0.000000

Inverse of matrix is: 
-nan  -nan  -inf  
-nan  -nan  inf   
krupa@krupa-VirtualBox:~/krupa$ 
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the size of rows and coloumns
2
2
Enter elements of matrix row wise:
3
0
2
-1

Given matrix is:
3  0  
2  -1 

determinant: 0.000000

Inverse of matrix is: 
-nan  -nan  
-nan  -nan  
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the size of rows and coloumns
2
2
Enter elements of matrix row wise:
3
0
2
0

Given matrix is:
3  0  
2  0  

determinant: 0.000000

Inverse of matrix is: 
-nan  -nan  
-nan  -nan  
krupa@krupa-VirtualBox:~/krupa$ gcc InvereMatrix.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
enter the size of rows and coloumns
4
5
Enter elements of matrix row wise:
4
6
7
8
1
-9
7
-9
0
4
-5 
-6
-1
-3
-5
-8
-2
-7

-0
0

Given matrix is:
4  6  7  8  1  
-9 7  -9 0  4  
-5 -6 -1 -3 -5 
-8 -2 -7 0  0  

determinant: 107.000000

Inverse of matrix is: 
-0.57 -0.34 -0.96 -0.57 -0.34 
0.34  0.29  -0.25 0.34  0.29  
0.83  -0.06 0.77  0.83  -0.06 
-0.57 -0.34 -0.96 -0.57 -0.34 
krupa@krupa-VirtualBox:~/kr

#endif