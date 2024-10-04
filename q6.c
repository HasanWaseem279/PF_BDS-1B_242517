#include<stdio.h>
int main() {
	int fuel;
	float cost = 0,sum;
	char flag = 'y';
	while(flag == 'y') {
		printf("Do you still want to purchase Fuel (y) or (n)");
		scanf(" %c",&flag);
		if(flag == 'y'){
			printf("Enter the ammount of fuel");
			scanf("%d", &fuel);
			cost = fuel*1.5;
			sum += cost;
		}
		else{
			flag = 'n';
		}
	}
	printf(" the cost is : %.2f",cost);
	
}