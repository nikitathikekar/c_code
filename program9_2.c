/*WAP to print the count of Divisors of the entered num
 */

#include<stdio.h>
void main(){
	int num;
	int count=0;
	printf("Enter a Number\n");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		if(num%i==0){
			count++;
		}
	}printf("Count Of Divisor=  %d\n",count);
}

