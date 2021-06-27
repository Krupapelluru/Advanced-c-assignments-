

/* program  to swap strings */



#include<stdio.h>


void  strinswap(char*,char*); 

int main()  
{  
      char str1[20];  
      char str2[20]; 

      printf("Enter the first string : ");  
      scanf("%s",str1);  

      printf("\nEnter the second string : ");  
      scanf("%s",str2);  

      printf("before the function the strings are %s %s\n",str1,str2);
       
       strinswap(str1,str2);

       printf("after the swap the strings are %s %s",str1,str2);

    return 0;  
  
  }  

  void  strinswap(char* str1,char* str2)
  {

    char* temp= str1;
    str1=str2;
    str2=temp;

  }
  


  #if 0



  krupa@krupa-VirtualBox:~/krupa$ gcc  strswap.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
Enter the first string : krupa

Enter the second string : latha
before the function the strings are krupa latha
after the swap the strings are krupa lathakrupa@krupa-VirtualBox:~/krupa$ ./a.out
Enter the first string : latha

Enter the second string : yachendra
before the function the strings are latha yachendra
after the swap the strings are latha yachendrakrupa@krupa-VirtualBox:~/krupa$ 

#endif