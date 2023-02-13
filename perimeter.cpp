#include <stdio.h>
int main(){
	int l,w,perimeter;
	printf("\nEnter length: ");
	scanf("%d",&l);
	printf("\nEnter Width: ");
	scanf("%d",&w);
	perimeter = 2*l+2*w;
	printf("\nPerimeter of rectangle is: %d",perimeter);
	return 0;
}
