#include<stdio.h>
int main() 
{
	int a=0;
	scanf("%d",&a); 
	printf("%d",(a%10)*100+((a-(a/100)*100)/10)*10+a/100);
	return 0;
 } 
