#include<stdio.h>
int main(){
int count=0,age,sum=0;
while(1){
    scanf("%d",&age);
    if(age<0)break;
    sum+=age;
    count++;

}
printf("%.2lf\n",(double)sum/(double)count);


return 0;
}
