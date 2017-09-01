#include<stdio.h>
#include<math.h>

int main(){
	int n;
	printf("Enter n for number of primes : ");
	scanf("%d",&n);
	
	int i=2,count_g=0;
	while(count_g<n){
		int count=0;
		for(int j=1;j<=sqrt(i);j++){
			if (i%j==0) count++;
		}
		if (count==1){
			printf("%d ",i);
			count_g++;
		}
		i++;
	}
	
	return 0;
}
