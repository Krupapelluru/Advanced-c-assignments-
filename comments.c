#include <stdio.h>
#if 0
/* factorila program

  /* owner of the laptop
   /* this is the factorial program*/
  /* enter number to find factorial
   *
   *
   * */ to comment nested comments we can use #if 0 to #endif*/

*/
#endif
int main()
{

	int n, i,fac=1;
	printf("enter the number to find factorial\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("the factorial %d of %d",n,fac);
	return 0;
}

