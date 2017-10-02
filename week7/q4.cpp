#include<stdio.h>
#include<math.h>

int dec_bin(int n){
	int i=0, b=0;
	while(n>0){
		int r=n%2;
		b+=r*pow(10,i);
		i++;
		n/=2;
	}
	return b;
}

int bin_dec(int n){
	int i=0, b=0;
	while(n>0){
		int r=n%10;
		b+=r*pow(2,i);
		i++;
		n/=10;
	}
	return b;
}

int main(){
	int n;
	printf("Enter n for binary conversion: ");
	scanf("%d",&n);
	printf("Dec: %d -> Bin: %d \n",n,dec_bin(n));

	printf("Enter n for decimal conversion: ");
	scanf("%d",&n);
	printf("Bin: %d -> Dec: %d \n",n,bin_dec(n));
	return 0;
}
