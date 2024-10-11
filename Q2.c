#include<stdio.h>
int main() {
	int a[9] = {1,2,3,4,5,6,7,8,9};
	int target;
	
	printf("Enter the number you want to search : ");
	scanf("%d", &target);
	
	for(int i = 0; i< 9; i++) {
		if(a[i] == target) {
			printf("Target found on Index : %d",i);
			return 0;
		}
	}
	printf("Not in Array");
}