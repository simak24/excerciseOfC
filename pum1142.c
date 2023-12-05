#include<stdio.h>
int main(){
int n, num=0;
scanf("%d",&n);
for(int i=0;i<n;i++){
    for(int j=0;j<4;j++){
        num++;
            if(num%4==0){
                printf("PUM\n");
            }else{
                    printf("%d ",num);

            }
    }
}

return 0;
}
