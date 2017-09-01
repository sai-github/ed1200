#include<stdio.h>
#include<math.h>

int main(){
	printf("Enter number to check if prime : ");
	int n;
	scanf("%d",&n);
	
	/*
	to make the logic efficient we need not check
	for all number from 1...n to be prime , it is sufficient
	for all numbers from 1...sqrt(n)
	
	Ex:
	for 100 ... checking from 1 to sqrt(100) = 10 is sufficient
	as 100 = 1x100
	         2x50
	         4x50
	         5x20
	         10x10
	for 100 to be prime it shouldn't be divisible by any other number except 1
	*/
	int count=0;
	for(int i=1;i<sqrt(n);i++){
		if (n%i==0) count++; 
	}
	
	if (count==1) printf("Prime\n");
	else printf("Not Prime\n");
	
	return 0;
}
