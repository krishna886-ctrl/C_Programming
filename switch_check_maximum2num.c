#include <stdio.h>
int main(){
	int num1,num2;
	printf("Enter a number: ");
	scanf("%d%d",&num1,&num2);
	switch(num2>num1) {
		case 0:
			printf("%d is maximum",num1);
			break;
		case 1:
		    printf("%d is maximum",num2);
			break;	
	}
}
