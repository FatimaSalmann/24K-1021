#include<stdio.h>
int main ()
{int i,Num,prime=0, a=0 , b=1, series;
 printf("enter a number");
 scanf("%d",&Num);
 // to find if number is prime or not 
 
 for (i=2 ;i<Num ;i++)
       { if(Num%i==0) 
        prime=1;
	}
	if (prime==0){
printf("entered number %d is prime\n",Num);}
else printf("entered number is not a prime number", Num);
    if (prime=1){
    	
    	// to find out series 
    	
    	 printf("Series is = ");
        for (i = 0; i <= Num; i++) {
            if (i == 0) {
                printf("%d ", a);
            } else if (i == 1) {
                printf("%d ", b);
            } else {
                series = a + b;
                a = b;
                b = series;
                printf("%d ", a);
            }
       }
}
return 0;
}
