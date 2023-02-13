#include <stdio.h>
int main(){
	int P,r,t,SI;
	printf("\nEnter P: ");
	scanf("%d",&P);
	printf("\nEnter r: ");
	scanf("%d",&r);
	printf("Enter t: ");
	scanf("%d",&t);
	SI = P*(1+r*t);
	printf("\nCI is: %d",SI);
	return 0;	
}
