#include<stdio.h>

void read_mat(int a[][10], int m, int n){
	//scan data
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}	
}

void print_mat(int a[][10], int m, int n){
	//print data
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%3d ",a[i][j]);
		}
		printf("\n");
	}	
}

void transpose_mat(int a_t[][10], int a[][10], int m, int n){
	n = (m>n?m:n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			a_t[i][j] = a[j][i];
		}
	}	
}

void add_mat(int c[][10], int a[][10], int b[][10], int m, int n){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}	
}

void mul_mat(int c[][10], int a[][10], int b[][10], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int temp=0;
			for(int k=0; k<n; k++){
				temp+=a[i][k]*b[k][j];
			}
			c[i][j]=temp;
		}
	}	
}

int main(){
	int a[10][10];
	printf("Enter mxn (matrix dimension) : ");
	int m,n;
	scanf("%d %d",&m,&n);
	
	printf("Enter A matrix: \n");
	read_mat(a, m, n);
	printf("Original\n");
	print_mat(a,m,n);
	
	printf("Tranpose\n");
	int a_t[10][10];
	transpose_mat(a_t,a,m,n);
	print_mat(a_t,n,m);
	
	int b[10][10];
	printf("Enter B matrix: \n");
	read_mat(b, m, n);
	
	printf("Addition\n");
	int c[10][10];
	add_mat(c,a,b,m,n);
	print_mat(c,m,n);
	
	printf("Product\n");
	int d[10][10];
	if(m!=n) printf("Cannot multiply\n");
	else{
		mul_mat(d,a,b,n);
		print_mat(d,n,n);	
	}
	
	return 0;
}
