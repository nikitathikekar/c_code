/* WAP which take a number as input from user if no. is even print that no. in reverse order to 1 if no. is odd print that 
 no. in reverse order by difference two to 1
input: 6
output: 6,5,4,3,2,1
input:7
output:7,5,3,1
*/
#include<stdio.h>
void main(){
	int num;
	printf("Enter a Number\n");
	scanf("%d",&num);
	if(num%2==0){
		while(num>0){
			printf("%d\n",num);
			num--;
		}
	}
	else if(num%2==1){
		while(num>0){
			printf("%d\n",num);
			num=num-2;
		}
	}
}
