/*WAP a program that takes the angles of triangle from user and check whether that triangle is valid or not
 */

#include<stdio.h>
void main(){
	int a,b,c;
	int sum;
	printf("Enter angles Of Triangle\n");
	scanf("%d %d %d",&a,&b,&c);
	sum= a+b+c;
	if(sum==180){
		printf("Your Triangle is Valid\n");
	}else{
		printf("Your Triangle is not Valid\n");
	}
}

