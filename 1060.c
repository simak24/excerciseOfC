#include<stdio.h>
int main(){
    double value;
    int pv=0;

    for(int i=0;i<6;i++){
        scanf("%lf",&value);

        if(value>0){
            pv++;
        }
    }

    printf("%d",pv);


return 0;
}
