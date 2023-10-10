#include<stdio.h>
int main(){
float n;
int n1;
scanf("%f",&n);
n1=n*100;
printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n",n1/10000);
n1=n1%10000;
printf("%d nota(s) de R$ 50.00\n",n1/5000);
n1=n1%5000;
printf("%d nota(s) de R$ 20.00\n",n1/2000);
n1=n1%2000;
printf("%d nota(s) de R$ 10.00\n",n1/1000);
n1=n1%1000;
printf("%d nota(s) de R$ 5.00\n",n1/500);
n1=n1%500;
printf("%d nota(s) de R$ 2.00\n",n1/200);
n1=n1%200;
printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n",n1/100);
n1=n1%100;
printf("%d moeda(s) de R$ 0.50\n",n1/50);
n1=n1%50;
printf("%d moeda(s) de R$ 0.25\n",n1/25);
n1=n1%25;
printf("%d moeda(s) de R$ 0.10\n",n1/10);
n1=n1%10;
printf("%d moeda(s) de R$ 0.05\n",n1/5);
n1=n1%5;
printf("%d moeda(s) de R$ 0.01\n",n1/1);


return 0;
}
