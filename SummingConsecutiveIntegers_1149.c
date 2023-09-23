#include<stdio.h>
int main(){
int a,n,sum=0;
scanf("%d %d",&a,&n);
while(1){
    if(n<=0){
        scanf("%d",&n);
    }
    if(n>0){
            for(int i=a;i<a+n;i++){
        sum+=i;
    }
    printf("%d\n",sum);
    break;
    }

}

return 0;
}
