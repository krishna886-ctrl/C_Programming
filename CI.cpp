#include <math.h>
#include <stdio.h>
int main(){
	float P,r,n,t,CI;
	printf("\nEnter P: ");
	scanf("%f",&P);
	printf("\nEnter r: ");
	scanf("%f",&r);
	printf("\nEnter n: ");
	scanf("%f",&n);
	printf("\nEnter t: ");
	scanf("%f",&t);
	CI = P*pow((1+r/n),n*t);
	printf("%f",CI);
	scanf("CI is: %.2f",CI);
	return 0;
}
