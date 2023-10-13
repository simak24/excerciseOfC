#include<stdio.h>
int main(){

int N[20],y;
for(int i=0;i<20;i++){
    scanf("%d",&y);
    N[i]=y;
}
int j=19;
for(int i=0;i<20;i++){
    printf("N[%d] = %d\n",i,N[j]);
    j--;
}

return 0;
}
