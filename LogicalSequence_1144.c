#include<stdio.h>
int main(){
int n,num1,num2,num3;
scanf("%d",&n);
for(int i=1;i<=n;i++){
num1=i;
num2=i*i;
num3=num2*i;
printf("%d %d %d\n",num1,num2,num3);
printf("%d %d %d\n",num1,num2+1,num3+1);
}

return 0;
}

