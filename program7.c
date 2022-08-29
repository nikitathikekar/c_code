/*WAP to Check Whether The input is a pythagorean Triplet or not
 */

#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter A Value Of Sides Of Triangle\n");
	scanf("%d %d %d",&a,&b,&c);
	if(c*c==a*a+b*b || b*b==a*a+c*c || a*a==b*b+c*c){
		printf("The Given Triangle Follows Pytha Triplet\n");

	}else{
		printf("The Given Triagle Not Follows Pytha Triplet");
	}
}
