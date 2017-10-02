#include<stdio.h>

void swap(int& a, int& b){
	int t;
	t=a;
	a=b;
	b=t;
}

int main(){
	int n;
	int arr[20];
	printf("Enter n (max size 20) : ");
	scanf("%d",&n);
	
	//scan array data
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	int swap_count = 0;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j]<arr[j+1]){
				swap(arr[j], arr[j+1]);
				swap_count++;
			}
		}
		if(swap_count==0) break;
	}
	
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
