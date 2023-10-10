#include<stdio.h>
int main(){
float sum=0,b=1,a=1;
for(int i=0;;i+2){
    if(a==39)break;
    sum+=(float)a/(float)b;
    a+=2;
    b*=2;
}
printf("%.2f\n",sum);

return 0;
}
