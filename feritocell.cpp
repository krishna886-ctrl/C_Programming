#include <stdio.h>
int main(){
	float f,tc;
	printf("Enter temp. in fahrenheit: ");
	scanf("%f",&f);
	tc = 32-f/1.8000;
	printf("Temp. in celcius: %f",tc);
	return 0;
}
