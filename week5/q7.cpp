#include<stdio.h>

int main(){
	int n1,n2;
	printf("Enter n1 n2 for Sigma(Sigma(i*j)) : ");
	scanf("%d %d",&n1,&n2);
	
	int s=0;
	
	//understanding initialization and incrementation part in 'for' loops
	int i=1;
	for(;i<=n1;){
		int j=1;
		for(;j<=n2;){
			s=s+i*j;
			j++;
		}
		i++;
	}
	printf("Sum : %d\n",s);
	return 0;
}
