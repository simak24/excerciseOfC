#include<stdio.h>
int main(){
int N;
scanf("%d",&N);
for(int i=1;i<N+1;i++){
    if(i%2==0){
        printf("%d^2 = %d\n",i,i*i);
    }
}

return 0;
}
