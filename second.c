/* Take Input from user and print thr number in reverse order
Input: 123
Output: 321
*/

#include<stdio.h>
void main(){
	int num;
	int rem;
	printf("Enter a No\n");
	scanf("%d",&num);
	while(num>0){
		rem = num%10;
		printf("%d",rem);
		num=num/10;
	}
}
