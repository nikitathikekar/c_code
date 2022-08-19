#include<stdio.h>
void main(){
	int n;
	printf("Enter No. Of Elements:\n");
	scanf("%d",&n);
	int sum;
	int n1=0;
	int n2=1;
	printf("%d\t",n1);
	printf("%d\t",n2);
	for(int i=2;i<=n;i++){
		sum= n1+n2;
		printf("%d\t",sum);
		n1=n2;
		n2=sum;
	}
}
	

