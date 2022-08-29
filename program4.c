/*WAP in which according to the month number print the no. of days in that month (use switch Case)
 */
#include<stdio.h>
void main(){
	int month;
	printf("Enter a no. of month\n");
	scanf("%d",&month);
	switch(month){
		case 1:
			printf("Jan Has 31 Days\n");
			break;
		case 2:
			printf("Feb Has 28 Or 29 Days\n");
			break;
		case 3:
			printf("March Has 31 Days\n");
			break;
		case 4:
			printf("April Has 30 Days\n");
			break;
		case 5:
			printf("May Has 31 Days\n");
			break;
		case 6:
			printf("June Has 30 Days\n");
			break;
		case 7:
			printf("July Has 31 Days\n");
			break;
		case 8:
			printf("August Has 31 Days\n");
			break;
		case 9:
			printf("September Has 30 Days\n");
			break;
		case 10:
			printf("Octomber Has 31 Days\n");
			break;
		case 11:
			printf("November Has 30 Days\n");
			break;
		case 12:
			printf("December Has 31 Days\n");
			break;
		default:
			printf("Wrong Input\n");
		
	}
}

