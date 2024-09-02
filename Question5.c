#include<stdio.h>
int main() {
	float P = 0.0, R = 0.0, T = 0.0, Final = 0.0;
	printf("Enter the Principal Amount (Must be Between 100Rs to 1,000,000Rs)");
	scanf("%f", &P);
	
	printf("Enter the Interest Rate (Must be Between 5% to 10%)");
	scanf("%f", &R);
	
	printf("Enter the Time Period (Must be Between 1year to 10 years)");
	scanf("%f", &T);
	
	Final = (P*R*T)/100.0;
	
	printf("The Final Amount is :%f ", Final);
	
	
	
	
	
	return 0;
}