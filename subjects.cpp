#include <stdio.h>
int main(){
	int BEEG,BCSG,BMAS,BPHS,BELH,Totalmarks,Averagemarks,Percentage;
	printf("\nEnter marks in BEEG: ");
	scanf("%d",&BEEG);
	printf("\nEnter marks in BCSG: ");
	scanf("%d",&BCSG);
	printf("\nEnter marks in BMAS: ");
	scanf("%d",&BMAS);
	printf("\nEnter marks in BPHS: ");
	scanf("%d",&BPHS);
    printf("\nEnter marks in BELH: ");
    scanf("%d",&BELH);
    
	Totalmarks = (BEEG+BCSG+BMAS+BPHS+BELH); 
    Averagemarks = Totalmarks / 5.0;
    Percentage = (Totalmarks / 500.0) * 100;
 
    printf("Total marks = %d\n",Totalmarks );
    printf("Average marks = %d\n",Averagemarks);
    printf("Percentage = %d", Percentage);
} 
