#include<stdio.h>
int main(){
long long int n,count=0;
scanf("%lld",&n);
if(n>=3){
   for(int i=1;i<=n;i++){
    count+=i;
}
printf("%lld\n",count-2*n);

}else printf("%d\n",0);


return 0;
}
