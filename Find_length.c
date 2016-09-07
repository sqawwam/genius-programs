#include<stdio.h>
int main()
{

int i,no,temp;

printf("Enter any number Number:");
scanf("%d",&no);

i=1;
while(i<5)         
   {
    temp=no%10;
    no=no/10;
    i++;
    
    if(no>10)
    continue;
    
    else
    break;
   }
   
  printf("You entered a %d digit number\n.",i); 
   
return 0;
}

/*********************** OUTPUT ********************************
qawwam@qawwam-System-Product-Name:~$ gcc 1.c
qawwam@qawwam-System-Product-Name:~$ ./a.out
Enter any number Number:9598
You entered a 4 digit number.
qawwam@qawwam-System-Product-Name:~$ 

*/
