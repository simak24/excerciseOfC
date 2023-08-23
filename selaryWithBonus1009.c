#include <stdio.h>

int main() {
char name[30];
float fixedSalary,totalSale;
scanf("%S %f %f",&name,&fixedSalary,&totalSale);
printf("TOTAL = R$ %.2f",fixedSalary+(totalSale*.15));
    return 0;
}


