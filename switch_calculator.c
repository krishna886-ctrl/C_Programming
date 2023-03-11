#include <stdio.h>
int main(){
	char op;
	double first,second;
	printf("Enter an operator (+,-,*,/): ");
	scanf("%c",&op);
	printf("\nEnter first operands: ");
	scanf("%lf", &first);
	printf("\nEnter Second operands: ");
	scanf("%lf", &second); 
	switch (op){
		case '+':
			printf("%.1lf + %.1lf =%.1lf",first,second,first+second);
			break;
		case '-':
		    printf("%.1lf - %.1lf =%.1lf",first,second,first-second);
			break;
		case '*':
		    printf("%.1lf * %.1lf =%.1lf",first,second,first*second);
			break;
		case '/':
		    printf("%.1lf / %.1lf =%.1lf",first,second,first/second);
			break;
		default:
		printf("Error! Invalid Operator");				
	}
	return 0; 
}
