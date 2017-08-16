#include<stdio.h>
#include<math.h>
#define PI 3.1415
//#include<conio.h>

/*
Input:
1 2 1 1

Output:
1.000000 2.000000 3.141500
4.000000 6.000000 6.283000

--------------------------------
*/
int main(){
	float s;
	float l,b;
	float r;
	
	scanf("%f %f %f %f",&s,&l,&b,&r);
	printf("%f %f %f \n",pow(s,2),l*b,PI*pow(r,2));
	printf("%f %f %f \n",4*s,2*(l+b),2*PI*r);
}
