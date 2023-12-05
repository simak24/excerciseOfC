#include<stdio.h>
int main(){
int n,num;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    num=i;
    for(int j=0;j<3;j++){
        printf("%d",num);
        num=num*i;
    }
    if(i!=n){
        printf("\n");
    }

}


return 0;
}
