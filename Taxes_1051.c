#include<stdio.h>
int main(){
double s;

scanf("%lf",&s);
if(s>=0.00 && s<=2000.00){
    printf("Isento\n");
}
if(s>=2000.01 && s<=3000.00){
    printf("R$ %.2lf\n",(s-2000.00)*.08);
}
if(s>=3000.01 && s<=4500.00){
    printf("R$ %.2lf\n",(s-3000.00)*.18+1000.0*.08);
}
if(s>4500.00){
    printf("R$ %.2lf\n",(s-4500.00)*.28+1500.00*.18+1000.0*.08);
        }

return 0;
}
