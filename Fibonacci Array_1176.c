#include<stdio.h>
int main(){
long  long fib[64],a=0,b=1,sum=0;
int n,t;
for(int i=0;i<64;i++){
    if(i==0){
        fib[i]=0;
    }else if(i==1){
    fib[i]=1;
    }else{
    sum=a+b;
    fib[i]=sum;
    a=b;
    b=sum;

  }

}

scanf("%d",&t);
int r[t],l;
for(int i=0;i<t;i++){
    scanf("%d",&l);
    r[i]=l;
}

for(int i=0;i<t;i++){
        n=r[i];
    printf("Fib(%d) = %lld\n",n,fib[n]);
}


return 0;
}
