#include<stdio.h>
int main(){
int n,x,y,sum,temp;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d %d",&x,&y);
    if(x>y){
        temp=x;
        x=y;
        y=temp;
    }
    sum=0;
    for(int i=x+1;i<y;i++){
        if(i%2!=0)sum+=i;
    }
    printf("%d\n",sum);
}

return 0;
}
