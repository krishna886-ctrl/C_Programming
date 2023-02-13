//#include <stdio.h>
//int main(){
//   float cm, m, km;
//   printf("enter length in cm:");
//   scanf("%f", &cm);
//   m = cm / 100.0;
//   km = cm / 100000.0;
//   printf("length in mtrs = %.4f", m);
//   printf("length in km = %.4f", km);
//   return 0;
//}

#include <stdio.h>
int main(){
	float cm,m,km;
	printf("Enter length in cm: ");
	scanf("%f",&cm);
	m = cm/100.0;
	km = cm/100000.0;
	printf("Length in meters : %.4f",m);
	printf("Length in km : %.4f",km);
	return 0;
}
