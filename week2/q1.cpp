#include<stdio.h>
#include<math.h>
//#include<conio.h> //just as get away for visualizing your output in MVS
#define PI 3.1415
/*
Input:
1
1 1
1 1 1

Output:
12.566000 12.566000 6.000000
--------------------------------
*/
int main(){
	float r1;
	float r2,l2;
	float l3,b3,h3;
	
	scanf("%f",&r1);
	scanf("%f %f",&r2,&l2);
	scanf("%f %f %f",&l3,&b3,&h3);
	
	printf("%f %f %f \n",4*PI*pow(r1,2),2*PI*r2*l2+2*PI*pow(r2,2),2*(pow(l3,2)+pow(b3,2)+pow(h3,2)));
	//getch();
	return 0;
}
