#include <stdio.h>
int main(){
	int a,b;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	if(a>b){
		printf("%d is maximum",a);
	}
	if(b>a){
		printf("%d is maximum",b);
	}
	if(a==b){
		printf("Both are Equal");
	}
	return 0;
}
