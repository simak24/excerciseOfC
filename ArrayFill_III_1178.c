#include<stdio.h>
int main(){
double x,n[100];
scanf("%lf",&x);
for(int i=0;i<100;i++){
    n[i]=x;
    x/=2.0;
}
for(int i=0;i<100;i++){
    printf("N[%d] = %.4lf\n",i,n[i]);
}


return 0;
}
