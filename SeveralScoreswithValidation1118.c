#include<stdio.h>
int main(){
double number,sum=0;
int count=0,x;
while(1){
        scanf("%lf",&number);
    if(number>=0&&number<=10){
        sum+=number;
        count++;
        if(count==2){
            break;
        }
    }else{
    printf("nota invalida\n");
    }
}
printf("media = %.2lf\n",sum/2.0);
printf("novo calculo (1-sim 2-nao)\n");

sum=number=0;
count=0;

while(1){
    scanf("%d",&x);
if(x==1){
    while(1){
    scanf("%lf",&number);
    if(number>=0&&number<=10){
            sum+=number;
            count++;
            if(count==2){
                break;
            }
    }else{
        printf("nota invalida\n");
        }
    }
    printf("media = %.2lf\n",sum/2.0);
    printf("novo calculo (1-sim 2-nao)\n");
}
else if(x==2){
    break;
}
else{
    printf("novo calculo (1-sim 2-nao)\n");
}

}


return 0;
}
