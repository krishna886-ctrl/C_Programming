#include <stdio.h>
int main(){
	int x,y,z;
	printf("\nEnter angle x: ");
	scanf("%d",&x);
	printf("\nEnter angle y: ");
	scanf("%d",&y);
	z=180-x-y;
	printf("\nAngle z is: %d",z);
	return 0;
}
