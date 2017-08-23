#include<stdio.h>
#include<math.h>

int main(){
	//1.Given temperature in Centigrade, convert it into Fahrenheit.
	printf("-----------------------------\n");
	float centi;
	printf("Enter Temperature in *C : ");
	scanf("%f",&centi);
	printf("\n");
	printf("%f *C is %f *F\n",centi,centi*9/5+32);
	
	
	//2.Calculate the Simple Interest and Amount, given the Principal (P), Rate (R) and Time (N).
	printf("-----------------------------\n");
	float p,r,t;
	printf("Enter P R T respectively : ");
	scanf("%f %f %f",&p,&r,&t);
	printf("\n");
	printf("Amount : %f Principle : %f Interest : %f\n",p+p*r*t/100,p,p*r*t/100);
	
	//3.Calculate the quotient and remainder of a given number when divided by 2, 3, and 5 respectively.
	printf("-----------------------------\n");
	int n;
	printf("Enter Number : ");
	scanf("%d",&n);
	printf("\n");
	printf("with 2 : Q: %d R: %d\nwith 3 : Q: %d R: %d\nwith 5 : Q: %d R: %d\n",n/2,n%2,n/3,n%3,n/5,n%5);
	
	//4.Find the average rainfall over 5 days in a region.
	printf("-----------------------------\n");
	float d1,d2,d3,d4,d5;
	printf("Enter Day1 Day2 Day3 Day4 Day5 rainfall values respectively : ");
	scanf("%f %f %f %f %f",&d1,&d2,&d3,&d4,&d5);
	printf("\n");
	printf("Average of 5 days rainfall : %f\n",(d1+d2+d3+d4+d5)/5);
	
	//5.Given a two digit number as input, print it in reverse.
	printf("-----------------------------\n");
	int digit2num;
	printf("Enter 2 Digit number : ");
	scanf("%d",&digit2num);
	printf("\n");
	printf("Original : %d  Reversed : %d%d\n",digit2num,digit2num%10,digit2num/10);
	
	//6.Given the number of Rs. 20 notes, Rs 50 notes and Rs. 100 notes, calculate the total amount.
	printf("-----------------------------\n");
	int n20,n50,n100;
	printf("Enter denomnitions of Rs20 Rs50 Rs100 respectively : ");
	scanf("%d %d %d",&n20,&n50,&n100);
	printf("\n");
	printf("Total : %d\n",20*n20+50*n50+100*n100);
	
	//7.Given time in number of minutes, display the time in hours format. (eg. 1135 minutes --> 18 hours 55 minutes).
	printf("-----------------------------\n");
	int mins;
	printf("Enter minutes : ");
	scanf("%d",&mins);
	printf("\n");
	printf("%d minutes is %d hours and %d minutes\n",mins,mins/60,mins%60);
	
	//8.Given a quadratic equation ax^2 + bx + c = 0, find the roots of the equation.
	printf("-----------------------------\n");
	float a,b,c;
	printf("Enter a b c of ax^2 + bx + c : ");
	scanf("%f %f %f",&a,&b,&c);
	printf("\n");
	float delta = sqrt(b*b -4*a*c);
	printf("Root1 : %f and Root2: %f\n",(-b+delta)/2/a,(-b-delta)/2/a);
	
	//9.Find the dot and cross product of two vectors (a1 i + b1 j + c1 k  and  a2 i + b2 j + c2 k)
	printf("-----------------------------\n");
	float a1,a2,a3,b1,b2,b3;
	printf("Enter a1 a2 a3 of a1 i + a2 j + a3 k : ");
	scanf("%f %f %f",&a1,&a2,&a3);
	printf("\n");
	printf("Enter b1 b2 b3 of b1 i + b2 j + b3 k : ");
	scanf("%f %f %f",&b1,&b2,&b3);
	printf("\n");
	printf("Dot product : %f i + %f j + %f k \n",a1*b1+a2*b2+a3*b3);
	printf("Cross product : %f i + %f j + %f k \n",a2*b3-b2*a3+-(a1*b3-b2*a3)+a1*b2-b1*a2);	
	
	//10.Calculate the CGPA of a student, who has 4 subjects in a semester. User should input grade and no of credits for each subject.
	printf("-----------------------------\n");
	float s1,g1,s2,g2,s3,g3,s4,g4;
	printf("Enter subject1 credits and grade : ");
	scanf("%f %f",&s1,&g1);
	printf("\n");
	printf("Enter subject1 credits and grade : ");
	scanf("%f %f",&s2,&g2);
	printf("\n");
	printf("Enter subject1 credits and grade : ");
	scanf("%f %f",&s3,&g3);
	printf("\n");
	printf("Enter subject1 credits and grade : ");
	scanf("%f %f",&s4,&g4);
	printf("\n");
	printf("CGPA : %f\n",(s1*g1+s2*g2+s3*g3+s4*g4)/(s1+s2+s3+s4));
	
	//11.Evaluate the following expression: 4x^5 - 3x^4 - 8x^3 + 12x^2 + x - 9.
	printf("-----------------------------\n");
	float x;
	printf("Enter x : ");
	scanf("%f",&x);
	printf("\n");
	printf("4x^5 - 3x^4 - 8x^3 + 12x^2 + x - 9 for x is : %f\n",4*pow(x,5)-3*pow(x,4)-8*pow(x,3)+12*pow(x,2)+x-9);	
	
	return 0;
}
