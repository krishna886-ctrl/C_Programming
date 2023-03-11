#include <stdio.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	switch(num%2==0){
		case 1:
			printf("\nEven Number");
			break;
		default:	
		    printf("Odd Number");
			break;		
	}
	return 0;   
}
