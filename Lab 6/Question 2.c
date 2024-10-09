#include<stdio.h>
int main ()
{int i,Num,prime=0;
 printf("enter a number");
 scanf("%d",&Num);
 for (i=2 ;i<Num ;i++)
       { if(Num%i==0) 
        prime=1;
	}
	if (prime==0){
printf("entered number %d is prime",Num);}
else printf("entered number is not a prime number", Num);
return 0;
}
