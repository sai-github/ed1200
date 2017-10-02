#include<stdio.h>
#include<limits.h>

void swap(int& a, int& b){
	int t;
	t=a;
	a=b;
	b=t;
}

int main(){
	int n;
	int a[20];
	printf("Enter n (max size 20) : ");
	scanf("%d",&n);
	
	//scan array data
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	int min = a[0];
	int min_index=0;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(min>a[j]){
				min = a[j];
				min_index = j;
			}
		}
		swap(a[i],a[min_index]);
		min_index = i+1;
		min = a[i+1];
	}
	
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}
