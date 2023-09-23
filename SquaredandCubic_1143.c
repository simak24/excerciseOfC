#include<stdio.h>
int main(){
int n,num;
scanf("%d",&n);
for(int i=1;i<=n;i++){
        num=i;
    for(int j=0;j<3;j++){
        printf("%d",num);
        if(j!=2){
            printf(" ");
        }
        num=num*i;
    }
    printf("\n");


}
return 0;
}
