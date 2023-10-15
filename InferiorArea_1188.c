#include<stdio.h>
int main(){
double M[12][12],sum=0,count=0,avg;
char O;
scanf("%c",&O);
for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
        scanf("%lf",&M[i][j]);
    }
}
for(int i=7;i<12;i++){
    for(int j=12-i;j<i;j++){
        sum+=M[i][j];
        count++;
    }
}avg=sum/count;
if(O=='S'){
    printf("%.1lf\n",sum);
}else{
printf("%.1lf\n",avg);
}


return 0;
}
