#include <stdio.h>

int main() {
int code1,units1;
float price1;
int code2,units2;
float price2;
scanf("%d %d %f",&code1,&units1,&price1);
scanf("%d %d %f",&code2,&units2,&price2);
printf("VALOR A PAGAR: R$ %.2f\n",units1*price1+units2*price2);
    return 0;
}

