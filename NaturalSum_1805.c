#include<stdio.h>
int main(){
long long a,b;
long long sum=0;
scanf("%lld %lld",&a,&b);
sum=(a+b)*(b-a+1)/2;
printf("%lld\n",sum);




return 0;
}
