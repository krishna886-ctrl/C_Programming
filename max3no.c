#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);
	if(a>b & a>c){
		printf("%d is maximum",a);
	}
	if(b>c & b>a){
		printf("%d is maximum",b);
	}
	if(c>a & c>b){
		printf("%d is maximum",c);
	}
	return 0;
}
