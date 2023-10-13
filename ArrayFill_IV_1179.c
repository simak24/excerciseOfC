#include<stdio.h>
int main(){
int par[5],impar[5],x,n=15,a=0,b=0;

for(int i=0;i<15;i++){
    scanf("%d",&x);
    if(x%2==0){
    par[a]=x;
    a++;
    }
    if(a==5){
    for(int i=0;i<=4;i++){
        printf("par[%d] = %d\n",i,par[i]);
    }
       int par[5]={0,0,0,0,0};
       a=0;
    }

    if(x%2!=0){
        impar[b]=x;
        b++;
    }

    if(b==5){
    for(int i=0;i<=4;i++){
    printf("impar[%d] = %d\n",i,impar[i]);
    }
    int impar[5]={0,0,0,0,0};
    b=0;
    }
}
for(int i=0;i<b;i++){
    printf("impar[%d] = %d\n",i,impar[i]);
}
for(int i=0;i<a;i++){
    printf("par[%d] = %d\n",i,par[i]);
}



return 0;
}
