#include<stdio.h>

int main(){
int j,i;
for(int i=1;i<=10;i+=2){
    for( j=6+i;j>=4+i;j--){
        printf("I=%d J=%d\n",i,j);

    }
}




return 0;
}
