#include<stdio.h>
int main()
{
    float salary , dearness_allowance , rent, gross_salary;
    printf("Enter Basic Salary: ");
    scanf("%f",&salary);
    dearness_allowance = 0.40 * salary;
    rent = .20 * salary;
    gross_salary = salary - (dearness_allowance + rent);
    printf("Dearness Allowance: %0.2f\nRent allowance: %0.2f\nGross salary: %0.2f\n", dearness_allowance,rent,gross_salary);
        
}