/*WAP to print the countdown of days to submit the assignments
input:4
output: 4 days remaining
3 days remaining
2 days remaining
1 day remaining
0 due date
*/
#include<stdio.h>
void main(){
	int x;
	printf("Enter days\n");
	scanf("%d",&x);
	while( x!=0){
		if(x==1){
			printf("%d day remaining\n",x);
		}else{
			printf("%d days remaining\n",x);
		}
		x--;
	}printf("%d Due date\n",x);

}

