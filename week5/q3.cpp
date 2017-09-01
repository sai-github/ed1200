#include<stdio.h>
#include<math.h>

int main(){
	int n;
	printf("Enter 3-digit number n : ");
	scanf("%d",&n);
	
	int a,b,c;
	a = n/100;
	c = n%10;
	b = (n-a*100)/10;
	
	if (pow(a,3)+pow(b,3)+pow(c,3)==n ){
		printf("%d is Armstrong number \n",n);
	}
	else{
		printf("%d is not an Armstrong number \n",n);
	}
	
	return 0;
}
