#include<stdio.h>

int main(){
int x,y,sum=0;
scanf("%d %d",&y,&x);
x+=1;
for(x;x<y;x++){
    if(x%2!=0){
        sum+=x;
    }
}
printf("%d\n",sum);



return 0;
}
