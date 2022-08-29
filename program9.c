/*WAP take two Characters if these Characters are equal then print them as it is but if they are unequal then print their difference*/

#include<stdio.h>
void main(){
	char ch1,ch2;
	printf("Enter first Character=\n");
	scanf(" %c",&ch1);
	printf("Enter 2nd Character=\n");
	scanf(" %c",&ch2);
	int diff;
	if(ch1 == ch2){
		printf("%c and %c are equal",ch1,ch2);
	}else if(ch2 != ch1){
	        diff=ch2-ch1;
		printf("diff= %d\n",diff);
	}else{
		printf("Wrong IP\n");
	}

}
