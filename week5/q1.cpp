#include<stdio.h>

int main(){
	printf("Enter 2 nums a b: ");
	int a,b;
	scanf("%d %d",&a,&b);
	
	a>b?printf("Largest : %d  Smallest %d \n",a,b):printf("Largest : %d  Smallest %d \n",b,a);
	
	int c;
	printf("Enter 3 nums a b c : ");
	scanf("%d %d %d",&a,&b,&c);
	
	int l,s;
	l = a>b?(b>c?(a):(a>c?a:c)):(c<a?b:(b>c?b:c));
	s = a<b?(b<c?(a):(a<c?a:c)):(c>a?b:(b<c?b:c));
	printf("Largest : %d  Smallest : %d \n",l,s);
	
	return 0;
}
