/* Take a Number from user print table of that no
 */

#include<stdio.h>
void main(){
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	int count=1;
	while(count<=10){
		printf("%d\t",num*count);
		count ++;
	}
}

