/*WAP to check whether the input is a leap year or not
 */
#include<stdio.h>
void main(){
	int yr;
	printf("Enter a Year\n");
	scanf("%d",&yr);
	if(yr>0){
		if(yr%4==0 || yr%400==0){
			printf("%d is a Leap Year\n",yr);
		}else{
			printf("%d is not a leap Year\n",yr);
	}
	}
}
