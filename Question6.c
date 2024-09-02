#include<stdio.h>
int main() {
	int x1 = 5, y1 = 4, x2 = 3, y2 = 2;
	float slope;
	slope = (y2-y1)/(x2-x1);
	printf("Slope = %.2f", slope); 
	return 0;
}