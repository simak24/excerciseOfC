#include <stdio.h>

int main() {
float a;
scanf("%f",&a);
if(0.00<=a && a<=2000.00){
    printf("Isento\n");
}else if(2000.01<=a && a<=3000.00){
printf("R$ %.2f\n",a*.08);
}else if(3000.01<=a && a<=4500.00){
printf("R$ %.2f\n",a*.18);
}else if(a>4500.00){
printf("R$ %.2f\n",a*.28);
}


    return 0;
}
