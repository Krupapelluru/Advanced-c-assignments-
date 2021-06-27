/* this program  is used compare the two strings */    


  #include <stdio.h>  
   
   int stringcompare(char*,char*); 

    int main()  
    {  
      char str1[20];  
      char str2[20]; 

      printf("Enter the first string : ");  
      scanf("%s",str1);  

      printf("\nEnter the second string : ");  
      scanf("%s",str2);  
      int compare=stringcompare(str1,str2); 
      
      if(compare==0)  
      printf("strings are equal");  
      else  
      printf("strings are not equal");  

    return 0;  
  
  }  
    



    int stringcompare(char *a,char *b)  
    {  
       int flag=0; 

        while(*a!='\0' && *b!='\0')  
        {  
            if(*a!=*b)  
            {  
                flag=1;  
            }  
            a++;  
            b++;  
        }  
          
        if(flag==0)  
        return 0;  
        else  
        return 1;  
    }  




  #if 0

krupa@krupa-VirtualBox:~/krupa$ gcc strcmp.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
Enter the first string : krupa

Enter the second string : latha
strings are not equalkrupa@krupa-VirtualBox:~/krupa$ ./a.out
Enter the first string : latha

Enter the second string : latha
strings are equalkrupa@krupa-VirtualBox:~/krupa$ ./a.out
Enter the first string : krupa123

Enter the second string : latha324
strings are not equalkrupa@krupa-VirtualBox:~/krupa$ 


  #endif

