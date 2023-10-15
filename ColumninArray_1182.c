#include<stdio.h>
int main(){
float M[12][12],sum=0,avg;
int C;
char T;
scanf("%d %c",&C,&T);
for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
        scanf("%f",&M[i][j]);
    }
}
for(int i=0;i<12;i++){
    for(int j=C;j<12;j++){
        sum+=M[i][j];
        break;
    }
}
avg=sum/12;
if(T=='S'){
    printf("%.1f\n",sum);
}else{
printf("%.1f\n",avg);
}



return 0;
}
