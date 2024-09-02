#include<stdio.h>
int main() {
	int n1,n2,temp;
	printf("Enter the First Number\n");
	scanf("%d", &n1);
	printf("Enter the Second Number\n");
	scanf("%d", &n2);
	temp = n1;
	n1 = n2;
	n2 = temp;
	printf("N1 : %d\n",n1);
	printf("N2 : %d\n",n2);
	
	
	return 0;
}