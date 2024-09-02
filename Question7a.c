#include<stdio.h>
int main() {
	float temp = 0.0, finaltemp = 0.0;
	
	printf("Enter the temprature in Celsius");
	scanf("%f", &temp);
	
	finaltemp = ((9.0/5.0)*temp) + 32.0;
	printf("The temprature in Farenheit is : %.3f ", finaltemp);
	
	return 0;
}