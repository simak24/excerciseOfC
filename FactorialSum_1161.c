#include<stdio.h>
int main(){
long long m,n;
while(scanf("%lld %lld",&m,&n)!=EOF){
        long long multi1=1,multi2=1;
    while(m>0){
        multi1*=m;
        m--;
    }
     while(n>0){
         multi2*=n;
        n--;
    }

    printf("%lld\n",multi1+multi2);
}

return 0;
}
