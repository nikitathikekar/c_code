/*WAP that takes a number from 0 to 5 And print its spelling,if the number is greater than 5(use switch case)*/
#include<stdio.h>
void main(){
	int num1;
	printf("Enter a No. from 0 to 5\n");
	scanf("%d",&num1);
	switch(num1){
		case 0:
			printf("%d = Zero\n",0);
			break;
		case 1:
			printf("%d = One\n",1);
			break;
		case 2:
			printf("%d = Two\n",2);
			break;
		case 3:
			printf("%d = Three\n",3);
			break;
		case 4:
			printf("%d = Four\n",4);
			break;
		case 5: 
			printf("%d = Five\n",5);
			break;
		default:
			printf("Your No. Is Greater Than 5\n");
	}
}


