#include<stdio.h>
int main(){
int x,sum,count;
while(1){
    scanf("%d",&x);
    if(x==0)break;
    sum=0;
    count=0;
    for(int i=x;;i++){
        if(i%2==0){
        if(count==5)break;
            sum+=i;
            count++;

        }
    }printf("%d\n",sum);



}



return 0;
}
