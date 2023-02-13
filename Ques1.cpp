#include <stdio.h>
int main() {    

    int a,b, sum;
    
    printf("\nEnter a : ");
    scanf("%d", &a);
    printf("\nEnter b : ");
    scanf("%d", &b);

    // calculating sum
    sum = a + b;      
    
    printf("%d + %d = %d", a, b, sum);
    return 0;
}
