/* Get range from User And print the no.s which is divisible by 4 and 5 
 */

#include<stdio.h>
void main(){
	int start_no;
	int end_no;
	printf("Enter Starting No\n");
	scanf("%d", &start_no);
	printf("Enter Ending No\n");
	scanf("%d", &end_no);
	while(start_no<=end_no){
		if(start_no%4==0 && start_no%5==0){
			printf("%d\n",start_no);
		}
		start_no++;
	}
}
