#include<stdio.h>
int main(){
int i;
char a;

for(i=1; i<6;i++){
	a = 'A' + (i - 1);
	if(i==1){
	printf("%c  %c  %c  %c  %c\n",a,'A'+1,'A'+2,'A'+3,'A'+4);}
	else if(i==5){
	printf("%c  %c  %c  %c  %c\n",'A'+4,'A'+5,'A'+6,'A'+7,'A'+8);}
	else if(i==2){
	printf("   %c     %c\n",'A'+2,'A'+5);}
	else if(i==3){
	printf("      %c         \n",'A'+4);}
	else if(i==4){
	printf("   %c     %c\n",'A'+4,'A'+7);}
}
return 0;
}
