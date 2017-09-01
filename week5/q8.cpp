#include<stdio.h>
#include<math.h>
#define PI 3.1415

int main(){
	float x;
	int n;
	printf("Enter x and n : ");
	scanf("%f %d",&x,&n);
	
	//S1
	float s=0;
	for(int i=1;i<=n;i++){
		s=s+1/pow(i,2);
	}
	printf("S1 : %f\n",s);
	
	//S2
	s=1;
	for(int i=2;i<=n;i++){
		s=s+1/(pow(-1,i)*pow(i,3));
	}
	printf("S2 : %f\n",s);
	
	//S3
	s=1;
	//Maximum limit of fact exceeds when n>7, then you need to go for long long int
	//if n>7 adjust back to n=7 or use appropriate data type for Cos calculation
	if (n>7) n=7;
	for(int i=1;i<=n;i++){
		unsigned long int fact=1;
		for(int j=1;j<=i;j++){
			fact*=j;
		}
		s+=pow(x,i)/(fact);
	}
	printf("S3 : %f\n",s);
	
	//S4
	s=1;
	//Maximum limit of fact exceeds when n>7, then you need to go for long long int
	//if n>7 adjust back to n=7 or use appropriate data type for Cos calculation
	int temp;
	temp=x/(2*PI);
	x=x-2*PI*temp;
	if (x<0) x=x+2*PI; //or you can initially do x=-x if x<0, since it is symetric function
	temp=x/PI;
	if (temp!=0) x=x-2*PI;
	
	for(int i=2;i<=2*n;i+=2){
		unsigned long int fact=1; 
		for(int j=2;j<=i;j++){
			fact*=j;
		}
		s+=pow(-1,i/2)*pow(x,i)/(fact);
	}
	printf("S4 : %f\n",s);
	return 0;
}
