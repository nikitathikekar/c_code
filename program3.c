/*WAP to find min among Three Nos
 */

#include<stdio.h>
void main(){
	int num1,num2,num3;
	printf("Enter Any Three Nos\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1<num2 && num1<num3){
		printf("%d is min\n",num1);
	}else if(num2<num1 && num2<num3){
		printf("%d is min\n",num2);
	}else if(num3<num1 && num3<num2){
		printf("%d is min\n",num3);
	}else if(num1==num2 && num2==num3){
		printf("%d %d %d are equal",num1,num2,num3);
	}
}


