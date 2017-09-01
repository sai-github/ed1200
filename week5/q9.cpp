#include<stdio.h>
#include<math.h>

int main(){
	int n,old;
	printf("Enter n to check if Armstrong number : ");
	scanf("%d",&n);
	old=n;
	int s=0,count=0;
	while(n>0){
		count++;
		n/=10;
	}
	n=old;
	while(n>0){
		s=s+pow(n%10,count);
		n/=10;
	}
	if (old==s) printf("Armstrong number\n");
	else printf("Not an Armstrong number\n");
	return 0;
}
