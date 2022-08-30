/*WAP to print the character is vaowel or consonant from 'A' to 'Z' . Take the lower bound and upper bound of character range from user
input: lower bound of range :c
	upper bound of range:F
Output: C is consonant
D is consonant
E is Vowel
F is Consonant
*/
#include<stdio.h>
void main(){
	char lBound;
	char uBound;
	printf("Enter Lower Bound Of range\n");
	scanf(" %c",&lBound);
	printf("Enter Upper Bound Of Range\n");
	scanf(" %c",&uBound);
	while(lBound<=uBound){
		if(lBound == 'A' || lBound== 'E' || lBound== 'I' || lBound=='O'||lBound=='U' || lBound=='a' ||lBound=='e'||lBound=='i'||lBound=='o'||lBound=='u'){
			printf(" %c is Vowel\n",lBound);
			lBound++;
		}
		else{
			printf(" %c is Consonant\n",lBound);
			lBound++;
		}
	}
}
