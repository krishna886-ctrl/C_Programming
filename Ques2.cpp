#include <stdio.h>
int main(){
	int a,b,sub;
	printf("Enter two integers: ");
	scanf("%d %d",&a,&b);
	sub = b-a;
	printf("%d-%d = %d",a,b,sub);
	return 0;
}
