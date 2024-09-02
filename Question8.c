#include<stdio.h>
int main() {
	float dis = 0.0, finaldis = 0.0;
	printf("Enter the distance in Kilometeres");
	scanf("%f", &dis);
	
	finaldis = dis*0.621;
	
	printf("The Distance in Miles is %.3f\n", finaldis);
	
}