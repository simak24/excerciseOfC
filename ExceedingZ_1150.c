#include<stdio.h>
int main(){
int x,z,sum=0,count=0;
scanf("%d",&x);
while(z<x){
    scanf("%d",&z);
}
            for(int i=x;i<z;i++){
                    sum+=i;
            count++;
            if(sum>z){
                break;
            }

    }
    printf("%d\n",count);



return 0;
}
