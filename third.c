/*Take a Input from user multiply the reverse no.by 5
 input: 123
 output:321=15105
 */

#include<stdio.h>
void main(){
	int num;
	printf("Enter a No\n");
	scanf("%d",&num);
	int rem;
	while(num!=0){
		rem = num%10;
		printf("%d = %d\n",rem,rem*5);
		num=num/10;
	}
}
