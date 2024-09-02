#include<stdio.h>
int main() {
	float temp = 0.0, finaltemp = 0.0;
	
	printf("Enter the temprature in Farenheit");
	scanf("%f", &temp);
	
	finaltemp = (Temp-32)*(5/9);
	printf("The temprature in Celsius is : %.3f ", finaltemp);
	
	return 0;
}