//#include <stdio.h>
//int main(){
//	int r,circumference;
//	printf("\nEnter radius of circle: ");
//	scanf("%d", &r);
//	circumference = 2*3.14*r;
//	printf("\nCircumference of a circle is: %d",circumference);
//	return 0;
//}

#include <stdio.h>
int main(){
	int r,diameter;
	printf("\nEnter radius: ");
	scanf("%d",&r);
	diameter = r/2;
	printf("\nDiameter of circle: %d",diameter);
	return 0;
}

