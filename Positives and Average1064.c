#include<stdio.h>
int main(){
double a;
double sum=0;
int count=0;

for(int i=0;i<6;i++){
    scanf("%lf",&a);
    if(a>0){
        sum+=a;
        count++;
    }
}
printf("%d valores positivos\n",count);
printf("%.1lf\n",sum/count);


return 0;
}
