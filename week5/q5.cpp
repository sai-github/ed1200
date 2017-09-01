#include<stdio.h>

int main(){
	printf("Enter num to check palindrome : ");
	int n;
	scanf("%d",&n);
	
	int old,rev;
	old = n;
	rev = 0;
	
	while(n>0){
		int r;
		r = n%10;
		rev = 10*rev + r;
		n/=10;
	}
	
	if (rev == old) printf("Palindrome\n");
	else printf("Not a Palindrome\n");
	
	return 0;
}
