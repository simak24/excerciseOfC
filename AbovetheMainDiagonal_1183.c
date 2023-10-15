#include<stdio.h>
int main(){
float M[12][12],sum=0,avg;
char O;
int count=0;
scanf("%c",&O);
for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
          scanf("%f",&M[i][j]);
    }
}
for(int i=0;i<12;i++){
    for(int j=i+1;j<12;j++){
          sum=sum+M[i][j];
          count++;
    }
}avg=sum/count;
if(O=='S'){
    printf("%.1f\n",sum);
}else{
printf("%.1f\n",avg);
}

return 0;
}
