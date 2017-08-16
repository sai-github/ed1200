#include<stdio.h>
#include<math.h>
//#include<conio.h>

int main(){
	float n;
	printf("Calculation for Squares and Cubes \n");
	printf("Enter n: ");
	scanf("%f", &n);
	printf("n: %f  n^2: %f  n^3: %f \n\n----\n", n,pow(n,2),pow(n,3));
	
	float a1,b1,a2,b2;
	printf("Calculation of Sum and Difference between 2 complex numbers\n");
	// you can get to a harder version of the same problem when you get to strings
	printf("Enter Re(Z)+Im(Z)i as Re(Z) Im(Z) for a1+b1*i : ");
	scanf("%f %f",&a1,&b1);
	printf("Enter Re(Z)+Im(Z)i as Re(Z) Im(Z) for a2+b2*i : ");
	scanf("%f %f",&a2,&b2);
	
	printf("Sum:\n");
	printf("(%f+(%f)i)+(%f+(%f)i) = %f+(%f)i\n",a1,b1,a2,b2,a1+a2,b1+b2);
	printf("Difference:\n");
	printf("(%f+(%f)i)-(%f+(%f)i) = %f+(%f)i\n",a1,b1,a2,b2,a1-a2,b1-b2);
	return 0;
}
