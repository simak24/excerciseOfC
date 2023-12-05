#include<stdio.h>
int main(){
    int A,B,C,x;
    double ar;
while(1){
    scanf("%d",&A);
    if(A==0)break;
    scanf("%d %d",&B,&C);
    ar=A*B*100.0/C;
    for( x=1;x*x<=ar;x++);
    x--;
    printf("%d\n",x);


}


return 0;
}
