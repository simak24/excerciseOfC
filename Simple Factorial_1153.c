#include<stdio.h>
int main(){
int n,s=1;
scanf("%d",&n);
while(n>0){
    s*=n;
    n--;
}
printf("%d\n",s);


return 0;
}


