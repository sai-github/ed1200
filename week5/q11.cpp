#include<stdio.h>
//solving without using functions
//works decent till n=5 considering numbers to be single digits

int main(){
	printf("Enter number of lines for Pascal triangle: ");
	int n;
	scanf("%d",&n);
	n=n+1;
	
	for(int i=1;i<=n;i++){
		int count=n-i;
		for(int k=1;k<=count;k++){
			printf(" ");
		}
		for(int m=0;m<=i-1;m++){
			float n_fact=1,n_r_fact=1,r_fact=1;
			for(int p=2;p<=(i-1);p++){
				n_fact*=p;
			}
			for(int p=2;p<=(i-1-m);p++){
				n_r_fact*=p;
			}
			for(int p=2;p<=m;p++){
				r_fact*=p;
			}
			printf("%d ",int(n_fact/(n_r_fact*r_fact)));
		}
		for(int k=1;k<=count;k++){
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
