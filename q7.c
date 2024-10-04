#include<stdio.h>
int main() {
	int num,factorial = 1;
	printf("Enter the number :");
	scanf("%d",&num);
	for(int i = 0; i < num; i++) {
		factorial = factorial *(num - i);
	}
	printf("Result : %d",factorial);
}