#include<stdio.h>
int main(){
int n,a,b,sum;

scanf("%d",&n);
int i=1;
while(i<=n){
        if(i==1){
                a=0;
            printf("%d",a);
            if(i!=n){
                printf(" ");
            }

        }
    else if(i==2){
            b=1;
        printf("%d",b);
         if(i!=n){
                printf(" ");
            }
    }else{
    sum=a+b;
    printf("%d",sum);
     if(i!=n){
                printf(" ");
            }
    if(i==n){
        printf("\n");
    }
    a=b;
    b=sum;

    }
    i++;
}

return 0;
}
