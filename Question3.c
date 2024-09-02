#include <stdio.h>

int main() {
    int GrossSalary, taxrate;
    float NetSalary;

    printf("Enter the Gross Salary\n");
    scanf("%d", &GrossSalary);

    printf("Enter TaxRate\n");
    scanf("%d", &taxrate);

    
    NetSalary = GrossSalary - (GrossSalary * (taxrate / 100.0));

    printf("Your Final Salary is : %f\n", NetSalary);

    return 0;
}
