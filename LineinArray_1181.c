#include<stdio.h>
int main(){
float M[12][12],sum=0,avg;
int L;
char S;
scanf("%d %c",&L,&S);
for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
        scanf("%f",&M[i][j]);
    }
}
for(int i=L;i<12;i++){
    for(int j=0;j<12;j++){
      sum+= M[i][j] ;
    }break;
}
avg=sum/12;
if(S=='S'){
    printf("%.1f\n",sum);
}else{
printf("%.1f\n",avg);
}


return 0;
}
