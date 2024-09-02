#include<stdio.h>
int main() {
	float Fuel = 0.0, AtoBcost = 0.0, BtoAcost = 0.0, FuelAvg;
	printf("Enter The Fuel Avg of your car \n");
	scanf("%f", &FuelAvg);
	Fuel = 1207.0/FuelAvg;
	AtoBcost = Fuel*118.0;
	BtoAcost  = Fuel*123.0;
	printf("The FinalCost is %.2f", AtoBcost + BtoAcost);
	
	
	
	
	
	
	return 0;
}