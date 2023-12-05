#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
while(n--){
        double x;
        int count=0;
    scanf("%lf",&x);
while(x>1){
    x/=2;
    count++;
}printf("%d dias\n",count);
}

return 0;
}
