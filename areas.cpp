#include <stdio.h>
int main(){
	int h,b,area;
	printf("\nEnter height of triangle: ");
	scanf("%d",&h);
	printf("\nEnter base of triangle: ");
	scanf("%d",&b);
	area = h*b*1/2;
	printf("\nArea of a triangle is: %d",area);
	return 0;
}
