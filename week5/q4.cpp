#include<stdio.h>

int main(){
	printf("Enter n : ");
	int n;
	scanf("%d",&n);
	
	int a0=0,a1=1;
	
	printf("Fibnocci Series for first %d numbers : ",n);
	if(n==1){
		printf("%d",a0);
	}
	else{
		printf("%d %d ",a0,a1);
		while(n>2){
			int next;
			next = a0+a1;
			printf("%d ",next);
			a0 = a1;
			a1 = next;
			n--;
		}
	}
	
	return 0;
}
