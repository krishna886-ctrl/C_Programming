#include <math.h>
#include <stdio.h>
int main(){
	int a,Equitriangle;
	printf("Enter a of equilateral triangle: ");
	scanf("%d",&a);
	Equitriangle = sqrt(3)/4*a*a;
	printf("\nThe area of Equilateral triangle is: %d",Equitriangle);
	return 0;
}
