

#include <stdio.h>

int main() {
float A,B,C;
scanf("%f %f %f",&A,&B,&C);
float triangle=1/2.0*A*C;
float circle=3.14159*C*C;
float trapezium=1/2.0*(A+B)*C;
float squire=B*B;
float rectangle=A*B;
printf("TRIANGULO: %.3f\n",triangle);
printf("CIRCULO: %.3f\n",circle);
printf("TRAPEZIO: %.3f\n",trapezium);
printf("QUADRADO: %.3f\n",squire);
printf("RETANGULO: %.3f\n",rectangle);

    return 0;
}
