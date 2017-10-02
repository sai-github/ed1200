#include<stdio.h>

int main(){
	int n;
	int a[20];
	printf("Enter n (max size 20 & sorted array) : ");
	scanf("%d",&n);
	
	//scan array data
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter target : ");
	int target;
	scanf("%d",&target);
	
	int left = 0, right = n-1, mid;
	bool status=0;
	while(left<=right){
		mid = (left+right)/2;
		if(a[mid]==target){
			printf("Found %d at position %d", target, mid);
			status=1;
			break;
		}
		else if(a[mid] > target){
			right = mid-1;
		}
		else{
			left = mid+1;
		}
	}
	if(!status) printf("Not found!");
	
	return 0;
}
