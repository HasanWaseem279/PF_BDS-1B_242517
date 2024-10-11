#include <stdio.h>

int main() {
    int a[10];
    for(int i = 0 ; i < 10; i++) {
    	scanf("%d",&a[i]);
	}
    int min = a[0];
    int max = a[0];

    for (int i = 1; i < 10; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("Minimum Number = %d\n", min);
    printf("Maximum Number = %d\n", max);

    return 0;
}
