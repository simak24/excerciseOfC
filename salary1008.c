#include <stdio.h>

int main() {
int employeeNumber;
float workingHour,salaryAmount;
scanf("%d %f %f",&employeeNumber,&workingHour,&salaryAmount);
printf("Number = %d\nSALARY = U$ %.2f\n",employeeNumber,workingHour*salaryAmount);


    return 0;
}

