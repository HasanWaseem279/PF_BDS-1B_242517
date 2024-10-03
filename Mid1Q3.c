#include<stdio.h>
int main() {
	long int tp, bn, ew, Id;
	float dc, tc;
	
	printf("Enter ID : \");
	scanf("%ld",&Id);
	
	if((Id / 1000000) != 0) {
		printf("Invalid Id");
		return 0;
	}
	
	printf("Enter the Ammount of Tickets you want to purchase : ");
	scanf("%d",&tp);
	
	bn = Id / 10000;
	ew = Id % 100;
	
	
	if(tp > 10) {
		if(bn == 21) {
			tc = (tp) * 1800;
			dc = tc - 1800;
			
		}
		else if(bn == 22) {
			tc = (tp) * 1700;
			dc = tc - 1700;
		}
		else if(bn == 23) {
			tc = (tp) * 1600;
			dc = tc - 1600;
		}
		else if(bn == 24) {
			tc = (tp) * 1500;
			dc = tc - 1500;
		}
	}
	else {
		if(bn == 21) {
			tc = (tp) * 1800;
		}
		
		else if(bn == 22) {
			tc = (tp) * 1700;	
		}
		
		else if(bn == 23) {
			tc = (tp) * 1600;	
		}
		
		else if(bn == 24) {
			tc = (tp) * 1500;	
		}
		
	}
	if(tp<=10){
		if(ew == 10) {
			dc = tc * 0.9;
		}
		else if(ew == 20) {
			dc = tc * 0.8;
		}
		
	}
	printf("Total Tickets Purcashed : %d \n",tp);
	printf("Total cost : %.2f"\n,tc);
	if(dc > 0){
		printf("Discounted Cost : %.2f"\n,dc);
	}
	
	
	
}