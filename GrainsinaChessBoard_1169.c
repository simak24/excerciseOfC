#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
while(n--){
    int x;
    long long int grain;
    scanf("%d",&x);
    grain=(long long)(pow(2,x)/12000);
    printf("%lld kg\n",grain);
}


return 0;
}
