/* WAP to get 10 numbers from users and find their sum and average
 */

#include<stdio.h>
void main(){
	int sum=0;
	int avg=0;
	int num;
	for(int i=1; i<=10; i++){
		printf("Enter a Number\n");
		scanf("%d",&num);
		sum=sum+i;
		avg=sum/10;
	}
	printf("Sum is %d\n",sum);
	printf("Average is %d\n",avg);
}
