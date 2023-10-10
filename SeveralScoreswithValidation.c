#include<stdio.h>
int main(){
    double n,count,sum=0,avg;
    int x;
while(1){
    if(sum==2)break;
    scanf("%lf",&n);
    if(n<0||n>10){
        printf("nota invalida\n");
    }else{
    sum+=n;
    count++;
    if(count==2){
        avg=sum/2;
        printf("media = %.2lf\n",avg);
    printf("novo calculo (1-sim 2-nao)\n");
    while(1){
    scanf("%d",&x);
        if(x==1){
        n=count=sum=0;
        break;
        }
        else if(x==2){
        sum=2;
        break;
        }else{
         printf("novo calculo (1-sim 2-nao)\n");
        }
    }
    }


    }
}

return 0;
}
